-- Nome: 2617 - Fornecedor Ajax SA
-- Nível: 1
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2617

select p.name, f.name from products p join providers f on p.id_providers=f.id where f.name='Ajax SA'