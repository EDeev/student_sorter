# Requirements

## Системные требования

### Операционная система
- Windows 10 (версия 1903 или выше)
- Windows 11 (любая версия)

### Среда разработки
- Visual Studio 2019 (версия 16.11 или выше) ИЛИ
- Visual Studio 2022 (рекомендуется)

### Компоненты Visual Studio
```
Visual Studio Installer components:
- MSVC v143 - VS 2022 C++ x64/x86 build tools
- Windows 10/11 SDK (10.0.19041.0 или выше)
- .NET Framework 4.8 targeting pack
- C++/CLI support for v143 build tools
```

### Фреймворки и библиотеки
- .NET Framework 4.8 Runtime
- Visual C++ Redistributable для Visual Studio 2022

### Внешние зависимости
- RSREU.IO.dll (включена в проект в папке x64/Debug/)

## Конфигурация проекта

### Платформы
- x64 (рекомендуется)
- x86 (поддерживается)

### Конфигурации
- Debug
- Release

### Свойства проекта
```xml
<TargetFrameworkVersion>v4.8</TargetFrameworkVersion>
<PlatformToolset>v143</PlatformToolset>
<CLRSupport>true</CLRSupport>
<CharacterSet>Unicode</CharacterSet>
```

## Установка зависимостей

### Автоматическая установка через Visual Studio

1. Откройте Visual Studio Installer
2. Выберите "Modify" для вашей установки Visual Studio
3. Убедитесь, что установлены следующие компоненты:
   - Desktop development with C++
   - .NET Framework 4.8 targeting pack
   - Windows 10/11 SDK

### Ручная установка

#### .NET Framework 4.8
```bash
# Скачайте с официального сайта Microsoft
https://dotnet.microsoft.com/download/dotnet-framework/net48
```

#### Visual C++ Redistributable
```bash
# Для x64 систем
https://aka.ms/vs/17/release/vc_redist.x64.exe

# Для x86 систем  
https://aka.ms/vs/17/release/vc_redist.x86.exe
```

## Сборка проекта

### Командная строка (MSBuild)
```bash
# Debug сборка
msbuild InvestWinApp.sln /p:Configuration=Debug /p:Platform=x64

# Release сборка
msbuild InvestWinApp.sln /p:Configuration=Release /p:Platform=x64
```

### Visual Studio IDE
```
1. File → Open → Project/Solution
2. Выберите InvestWinApp.sln
3. Build → Build Solution (Ctrl+Shift+B)
```

## Дополнительные инструменты (опционально)

### Для разработки
- Git for Windows (для контроля версий)
- Windows Terminal (улучшенный терминал)

### Для отладки
- Application Verifier (Windows SDK)
- PerfView (для профилирования)

## Проверка установки

Выполните следующие команды в командной строке для проверки:

```bash
# Проверка .NET Framework
reg query "HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\NET Framework Setup\NDP\v4\Full\" /v Release

# Проверка Visual Studio
where msbuild

# Проверка Windows SDK
dir "C:\Program Files (x86)\Windows Kits\10\bin"
```

## Устранение неполадок

### Ошибка "RSREU.IO не найдена"
- Убедитесь, что файл RSREU.IO.dll находится в папке x64/Debug/
- Проверьте ссылки на библиотеку в настройках проекта

### Ошибка "Не удается найти Windows SDK"
- Переустановите Windows SDK через Visual Studio Installer
- Проверьте переменную среды WINDOWS_SDK_VERSION

### Проблемы с .NET Framework
- Переустановите .NET Framework 4.8
- Проверьте наличие обновлений Windows
