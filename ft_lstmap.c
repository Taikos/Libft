#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tempf;

	if (lst)
	{
		tempf = f(lst);
		(*tempf).next = ft_lstmap((*lst).next, f);
		return (tempf);
	}
	else
		return (NULL);
}
