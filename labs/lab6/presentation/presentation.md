---
## Front matter
lang: ru-RU
title: Отчёт по лабораторной работе №6
subtitle: Мандатное разграничение прав в Linux
author:
  - Вейценфельд Д. А.
institute:
  - Российский университет дружбы народов, Москва, Россия
date: 01 октября 2022

## i18n babel
babel-lang: russian
babel-otherlangs: english

## Formatting pdf
toc: false
toc-title: Содержание
slide_level: 2
aspectratio: 169
section-titles: true
theme: metropolis
header-includes:
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
 - '\makeatletter'
 - '\beamer@ignorenonframefalse'
 - '\makeatother'
---

## Цель

Развить навыки администрирования ОС Linux. Получить первое практическое знакомство с технологией SELinux.
Проверить работу SELinx на практике совместно с веб-сервером Apache

## Enforcing, targeted

![Проверка enforce и SELinux](image/20221015203105.png){ #fig:001 width=70% }

## Запуск Apache Web Server

![Запуск сервера](image/20221015203358.png){ #fig:002 width=80% }

## Контекст безопасности

![Процессы httpd](image/20221015203436.png){ #fig:003 width=90% }

## Переключатели SELinux для httpd

![Команда для состояния переключателей SELinux](image/20221015203750.png){ #fig:004 width=70% }

![Переключатели](image/20221015211529.png){ #fig:005 width=80% }

## Политика SELinux

![Статистика по политике](image/20221015203912.png){ #fig:006 width=70% }

## /var/www

![Содержимое /var/www/*](image/20221015204017.png){ #fig:007 width=90% }

## Тестовый статичный файл

![Создание файла](image/20221015204244.png){ #fig:008 width=70% }

![Контент файла](image/20221015204312.png){ #fig:009 width=70% }

## Контекст файлов в www

![Контекст созданного файла](image/20221015204407.png){ #fig:010 width=80% }

## Тест веб-сервера

![Обращение](image/20221015204712.png){ #fig:011 width=70% }

![Ответ](image/20221015204722.png){ #fig:012 width=80% }

## Контексты для httpd

![Нет справки](image/20221015204841.png){ #fig:013 width=70% }

![Изменен контекст](image/20221015205058.png){ #fig:014 width=70% }

## Контексты для httpd

![Ошибка доступа](image/20221015205127.png){ #fig:015 width=80% }

## Контексты для httpd

![Вырезка из лога](image/20221015205355.png){ #fig:016 width=90% }

## Управление портами в SELinux

![Последовательность действий](image/20221015205706.png){ #fig:017 width=70% }

![Порт в конфиге](image/20221015205604.png){ #fig:018 width=70% }

## Управление портами в SELinux

![/var/log/messages](image/20221015205918.png){ #fig:019 width=90% }

## Управление портами в SELinux

![Порт уже был определен](image/20221015210109.png){ #fig:020 width=70% }

## Управление портами в SELinux

![Контекст](image/20221015210334.png){ #fig:021 width=80% }

![Ответ на запрос](image/20221015210426.png){ #fig:022 width=70% }

## Управление портами в SELinux

![Перезапуск сервера](image/20221015210632.png){ #fig:023 width=70% }

## Управление портами в SELinux

![Ошибка удаления порта](image/20221015210733.png){ #fig:024 width=80% }
