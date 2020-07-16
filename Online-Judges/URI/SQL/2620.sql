-- Nome: 2620 - Pedidos no primeiro semestre
-- Nível: 3
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2620

select c.name, o.id from customers c join orders o on o.id_customers=c.id
where o.orders_date between '2016/01/01' and '2016/06/30'