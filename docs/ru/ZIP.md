## Общие правила использования ZIP

#### Доступно с версии CQtDeployer 1.5

### Как использовать опцию zip

Просто добавьте в cqtdeployer опцию «zip».

#### Например:

``` bash
     cqtdeployer ... zip
```

Где:
* ** ... ** - список других опций.
* ** zip ** - опция использования zip архивов.


По умолчанию cqtdeployer создает один zip-архив.
Если вы хотите создать рассылку нескольких пакетов, вы должны использовать [Параметры управления пакетами](Options)
Чтобы создать новый пакет, используйте -targetPackage [package; tar1] вариант

cqtdeployer создает zip-архив для каждого пакета.

Где:

* **package** - это название пакета
* **tar1** - это имя цели, которая должна быть включена в этот пакет.

Или вы можете описать пакеты в [файле конфигурации](DeployConfigFile)


```JSON
{
"targetPackage": [
     [
         "package",
         "Tar1"
     ],
],
"zip": true
}
```
