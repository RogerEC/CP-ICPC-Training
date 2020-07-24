-- Nome: 2737 - Advogados
-- Nível: 6
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2737

select name, customers_number 
from(
  select name, customers_number, 1 as filter from lawyers  
  where customers_number = (select max(customers_number) from lawyers) 
  or customers_number = (select min(customers_number) from lawyers)
union all 
  select 'Average', round(avg(customers_number),0), 2 as filter  from lawyers
) as table1
order by filter, customers_number desc