# DrWebTest

### 💥Задание

Необходимо реализовать класс контейнера,
реализующий интерфейс ```dictionary``` и способный выбросить исключение,
реализующее интерфейс ```not_found_exception```.
При разработке допускается использовать STL.
Кроме этого, внутренняя реализация ничем не ограничена.

```sh
template<class Key, class Value>
class dictionary {
public:
virtual ~dictionary() = default;

    virtual const Value& get(const Key& key) const = 0;
    virtual void set(const Key& key, const Value& value) = 0;
    virtual bool is_set(const Key& key) const = 0;
};
```

```sh
template<class Key>
class not_found_exception : public std::exception {
public:
virtual const Key& get_key() const noexcept = 0;
};
```