#ifndef	__unp_error_h
#define __unp_error_h

void	 err_dump(const char *, ...);
void	 err_msg(const char *, ...);
void	 err_quit(const char *, ...);
void	 err_ret(const char *, ...);
void	 err_sys(const char *, ...);
void	 err_cont(int error, const char *fmt, ...);
void	 err_exit(int error, const char *fmt, ...);

#endif

