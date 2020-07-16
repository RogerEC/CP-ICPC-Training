-- Nome: 2606 - Categorias
-- Nível: 3
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2606

select products.id, products.name from products, categories
where categories.id=products.id_categories and categories.name like 'super%';