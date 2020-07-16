-- Nome: 2621 - Quantidades entre 10 e 20
-- Nível: 1
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2621

select p.name from products p join providers f on p.id_providers=f.id where f.name like 'P%' and p.amount between 10 and 20