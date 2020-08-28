define MAX_INTF_SLOTS 8

/*Forward Decleration*/
typedef struct node_ node_t;
typedef struct link_ link_t;

typedef struct node_
{
        char node_name[32];
        interface_t *intf[MAX_INTF_SLOTS];
        glthread_t graph_glue;
}node_t;

typedef struct link_{
        interface_t intf1;
        interface_t intf2;
        unsigned int cost;
}link_t;

typedef struct graph_{
        char topology_name[32];
        glthread_t node_list;
}graph_t;

typedef struct interface_{
        char if_name[32];
        lint_t *link;
        node_t *att_node;
}interface_t;


/*The function must return the pointer to the nbr node which is connected to the interface passes as an argument.*/
static inline node_t *
get_nbr_node(interface_t *interface)
{
        if(interface->link.intf1) {
                return node->intf->link.intf2.att_node;
        }
        return node->intf->link.intf1.att_node;
}
