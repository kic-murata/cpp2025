#include <iostream>
#include <stack>
#include <string>
using namespace std;
// シーン基底クラス
class GameScene {
public:
  // 仮想デストラクタにしてインスタンス消去時に必ず呼び出す
  virtual ~GameScene() {}
  // 純粋仮想関数（子クラス側で実装する）
  virtual void update() = 0;
  virtual string getName() = 0;
};

// 各シーン用のクラス
class PlayScene : public GameScene {
public:
  void update() override {
    cout << "-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "|                    |" << endl;
    cout << "|  Playing Game Now  |" << endl;
    cout << "|                    |" << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "  [M]enu      [E]xit" << endl;
  }
  string getName() override { return "プレイ画面"; }
};

class MenuScene : public GameScene {
public:
  void update() override {
    cout << ">>> メニューを開きました (Push)" << endl;
    cout << "-=-=- [GameMenu] -=-=-" << endl;
    cout << "|                    |" << endl;
    cout << "| [I]tem    [S]tatus |" << endl;
    cout << "|                    |" << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "        [Q]uit" << endl;
  }
  string getName() override { return "メニュー画面"; }
};

class ItemScene : public GameScene {
public:
  void update() override {
    cout << ">>> アイテム画面に入りました (Push)" << endl;
    cout << "-=-=- [ItemList] -=-=-" << endl;
    cout << "|                    |" << endl;
    cout << "|     No Item        |" << endl;
    cout << "|                    |" << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "        [Q]uit" << endl;
  }
  string getName() override { return "アイテム画面"; }
};

class StatusScene : public GameScene {
public:
  void update() override {
    cout << ">>> ステータス画面に入りました (Push)" << endl;
    cout << "-=-=-= [Status] =-=-=-" << endl;
    cout << "|  Name: Hero-kun    |" << endl;
    cout << "|  HP :100  MP :50   |" << endl;
    cout << "|  ATK: 60  DEF:10   |" << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "        [Q]uit" << endl;
  }
  string getName() override { return "ステータス画面"; }
};

int main() {
  //課題①
  // シーン遷移を管理するためのスタックsceneStackを宣言する
  // GameSceneを基底としたポインタで管理
  stack<GameScene*> sceneStack;

  // 最初にPlaySceneのインスタンスを生成してスタックにPushする
  sceneStack.push(new PlayScene());

  // キーボードから１文字取得するための変数を定義
  char input;
  // ゲームループ中は常にtrue
  bool isRunning = true;

  //　画面消去
  system("cls");

  // ゲームループ中の処理
  while (isRunning) {
    //課題②
    // sceneStackにシーンが入ってなければループを抜ける
    if (sceneStack.empty()) {
      break;
    }

    //課題③
    // 現在スタックの一番上にあるシーンのupdate関数を呼び出す
    sceneStack.top()->update();

    // 入力待ち
    cout << "入力待機: ";
    cin >> input;

    //課題④
    // シーン遷移処理
    // 入力された文字がMで、現在のスタックの一番上が"プレイ画面"のとき
    if (toupper(input) == 'M' && sceneStack.top()->getName() == "プレイ画面") {
      // スタックにMenuSceneをPushする
      sceneStack.push(new MenuScene());
    }
    // 入力された文字がIで、現在のスタックの一番上が"メニュー画面"のとき
    else if (toupper(input) == 'I' && sceneStack.top()->getName() == "メニュー画面") {
      // スタックにItemSceneをPushする
      sceneStack.push(new ItemScene());
    }
    // 入力された文字がSで、現在のスタックの一番上が"メニュー画面"のとき
    else if (toupper(input) == 'S' && sceneStack.top()->getName() == "メニュー画面") {
      // スタックにStatusSceneをPushする
      sceneStack.push(new StatusScene());
    }
    //課題⑤
    // 入力された文字がQのとき
    else if(toupper(input) == 'Q'){
      // スタックに２つ以上シーンがあるとき
      if (sceneStack.size() > 1) {
        // 閉じるシーン名を表示
        cout << sceneStack.top()->getName()
          << "を閉じます" << endl;

        // スタックの一番上にあるシーンのポインタを取得して一時保存
        GameScene* deleteScene = sceneStack.top();

        // スタック一番上を取り除く（インスタンスは未解放）
        sceneStack.pop();

        // 確保していたインスタンスが確保していたメモリを解放
        delete deleteScene;
      }
      else {
        // 戻るシーンがないときの表示
        cout << "これ以上シーンを戻れません\n";
      }
    }
    //課題⑥
    // 入力された文字がEのとき
    else if (toupper(input)=='E') {
      // ゲームループを抜ける
      isRunning = false;
    }
  }
  //課題⑦
  // スタック上に残っているシーンがあれば（空でなければ）すべて解放
  while (!sceneStack.empty()) {
    GameScene* deleteScene = sceneStack.top();
    sceneStack.pop();
    delete deleteScene;
  }
  // 終了メッセージの表示
  cout << "ゲーム終了" << endl;

  return 0;
}