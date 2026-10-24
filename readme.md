AtCoderの問題を解くリポジトリ。mise管理。

## TL;DR

```bash
mise trust
mise install
mise exec -- acc config oj-path "$(mise which oj)"
mise exec -- acc check-oj
```

> [!note]
うまく認証できなかったので、ojの改善版である`online-judge-tools-ng`を使っています  
そのままだと`acc`から`oj`を認識できないので、保存先を設定します。
```bash
mise exec -- acc config oj-path "$(mise which oj)"
mise exec -- acc check-oj
```

## テストするとき

```bash
mise run test
```

## 提出するとき

```bash
mise run submit
```
