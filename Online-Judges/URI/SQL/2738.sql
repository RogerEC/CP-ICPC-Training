-- Nome: 2738 - Concurso
-- Nível: 4
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2738

select c.name, round(((s.math*2)+(s.specific*3)+(project_plan*5))/10,2) as avg
from candidate c inner join score as s on c.id = s.candidate_id
order by avg desc