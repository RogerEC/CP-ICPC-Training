-- Nome: 2619 - Super Luxo
-- Nível: 2
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2619

select p.name, f.name, p.price from products p inner join categories c on p.id_categories = c.id inner join providers f on p.id_providers = f.id where p.price > 1000 and c.name = 'Super Luxury'