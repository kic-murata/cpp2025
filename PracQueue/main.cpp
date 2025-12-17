#include <iostream>
#include <queue>
using namespace std;

// メッセージダイアログ用クラス
class Dialog {
private:
  string speaker; // 話している人
  string text;    // メッセージ
public:
  // コンストラクタ
  Dialog() = default;
  Dialog(string name, string content) 
   : speaker(name), text(content) {}
  // ゲッター２種
  string getSpeaker() const {
    return speaker;
  }
  string getText() const{
    return text;
  }
};

int main() {
  // 課題①
  // メッセージを溜めておくキュー
  queue<Dialog*> diaQueue;

  // 課題②
  // 会話データはファイルに保存しているものを一行ずつ読み取って
  // 表示する順番どおりにキューに格納。
  FILE* fp;
  if (fp = fopen("message.txt","r")) {
    char speaker[10], text[100];
    while(fscanf(fp,"%s %s",speaker,text) != EOF) {
      diaQueue.push(new Dialog(speaker, text));
    }
    fclose(fp);
  }
  else {
    cout << "FileError!" << endl;
    return -1;
  }

  cout << "=== 会話イベント開始 ===" << endl;

  // 課題③
  // 会話の再生ループ
  while (!diaQueue.empty()) {

    // 課題④
    // キューの先頭にあるメッセージを取得
    Dialog* frontMessage = diaQueue.front();
    // 画面にメッセージを表示する
    cout << "------------------------------------------" << endl;
    cout << "【" << frontMessage->getSpeaker() << "】" << endl;
    cout << " 「" << frontMessage->getText() << "」" << endl;
    cout << "------------------------------------------" << endl;
    cout << "  (Enterで次へ) >";

    // Enterキーが押されるまで待つ
    cin.get();

    // 課題⑤
    // 表示したメッセージをキューから削除
    diaQueue.pop();
    // Dialogインスタンスのメモリ解放
    delete frontMessage;
  }

  cout << endl << "=== 会話イベント終了 ===" << endl;

  return 0;
}