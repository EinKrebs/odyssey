#ifndef ODYSSEY_PAM_H
#define ODYSSEY_PAM_H

/*
 * Odyssey.
 *
 * Scalable PostgreSQL connection pooler.
 */

struct od_pam_auth_data
{
	int key;
	char *value;
	od_list_t link;
};

typedef struct od_pam_auth_data od_pam_auth_data_t;

int
od_pam_auth(char *od_pam_service,
            od_pam_auth_data_t *auth_data,
            machine_io_t *io);

void
od_pam_convert_usr_passwd(od_pam_auth_data_t *d, char *usr, char *passwd);

od_pam_auth_data_t *
od_pam_auth_data_create();

void
od_pam_auth_data_free(od_pam_auth_data_t *d);

#endif /* ODYSSEY_PAM_H */
