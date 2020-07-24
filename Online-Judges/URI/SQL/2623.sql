-- Nome: 2623 - Categorias com Vários Produtos
-- Nível: 4
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2623

select p.name, c.name from products p join categories c on p.id_categories=c.id 
where p.amount > 100 and (c.id=1 or c.id=2 or c.id=3 or c.id=6 or c.id=9)
order by c.id asc