-- Nome: 2610 - Valor médio dos produtos
-- Nível: 3
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2610

select cast(avg(price) as numeric (10,2)) from products