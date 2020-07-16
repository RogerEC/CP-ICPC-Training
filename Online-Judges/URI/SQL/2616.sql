-- Nome: 2616 - Nenhuma Locação
-- Nível: 5
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2616

select c.id, c.name from customers c where not exists(select * from locations l where l.id_customers=c.id)