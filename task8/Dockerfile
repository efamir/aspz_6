# Використовуємо образ Ubuntu
FROM ubuntu:latest

# Встановлюємо необхідні інструменти: Valgrind та build-essential
RUN apt update && apt install -y valgrind build-essential

# Встановлюємо робочу директорію всередині контейнера
WORKDIR /app

# Копіюємо наш файл у робочу директорію
COPY task8.c .

# Компілюємо
RUN gcc task8.c -o task8

# Після збірки образу перевіряємо програму з valgrind
CMD ["valgrind", "--leak-check=full", "--track-origins=yes", "./task8"]
