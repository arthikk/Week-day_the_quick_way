correction=function(y,m)
{
	return (if(y %% 4 == 0 && m < 3) 1 else 0)
}

year_month_part=function(y,m)
{
	y=y%%400	
	return ((floor(5*y/4)-floor(y/100)+3*floor((9*m-8)/10)-floor(abs(2*m-4)/5)-correction(y,m)) %% 7)
}

year_month_part_next=function(y,m)
{
	y = (y + floor(m/12)) %% 400
	m = 1 + (m %% 12)
	return (year_month_part(y,m))
}

first_weekday=function(y,m,weekday)
{
	return (1 + (weekday - 1 - year_month_part(y,m)) %% 7)
}
