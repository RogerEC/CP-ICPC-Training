-- Nome: 2614 - Locações de Setembro
-- Nível: 5
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2614

select c.name, r.rentals_date from customers c join rentals r on r.id_customers=c.id where r.rentals_date between '2016/09/01' and '2016/09/30'