-- Nome: 2609 - Produtos por Categoria
-- Nível: 6
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2609

select c.name, SUM(p.amount) as sum from products p join categories c on p.id_categories=c.id group by c.name