| Structure name | Defined in | Attributes | Caller Functions Source | Source Caller | Usage |
|---|---|---|---|---|---|
| io_fadvise | advise.c | offset, len, advice | io_madvise | advise.c | local variable |
| io_fadvise | advise.c | offset, len, advice | io_madvise | advise.h | local variable |
| io_fadvise | advise.c | offset, len, advice | io_fadvise_force_async | advise.c | function parameter |
| io_fadvise | advise.c | offset, len, advice | io_fadvise_prep | advise.c | local variable, return value |
| io_fadvise | advise.c | offset, len, advice | io_fadvise_prep | advise.h | local variable, return value |
| io_fadvise | advise.c | offset, len, advice | io_fadvise | advise.c | local variable, return value |
| io_fadvise | advise.c | offset, len, advice | io_fadvise | advise.h | local variable, return value |
| io_fadvise | advise.c | offset, len, advice | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_madvise | advise.c | addr, len, advice | io_madvise_prep | advise.c | local variable, return value |
| io_madvise | advise.c | addr, len, advice | io_madvise_prep | advise.h | local variable, return value |
| io_madvise | advise.c | addr, len, advice | io_madvise | advise.c | local variable, return value |
| io_madvise | advise.c | addr, len, advice | io_madvise | advise.h | local variable, return value |
| io_madvise | advise.c | addr, len, advice | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_cancel_req_match | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_cancel_req_match | cancel.h | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_cancel_req_match | poll.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_cancel_req_match | timeout.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_async_cancel_one | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_try_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_try_cancel | cancel.h | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_try_cancel | timeout.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_async_cancel_prep | cancel.c | local variable, return value |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_async_cancel_prep | cancel.h | local variable, return value |
| io_cancel | cancel.c | addr, flags, fd, opcode | __io_async_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_async_cancel | cancel.c | local variable, return value |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_async_cancel | cancel.h | local variable, return value |
| io_cancel | cancel.c | addr, flags, fd, opcode | __io_sync_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_futex_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_futex_cancel | futex.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_futex_cancel | futex.h | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_futex_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_futex_cancel | futex.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_futex_cancel | futex.h | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_poll_find | poll.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_poll_file_find | poll.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | __io_poll_cancel | poll.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_poll_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_poll_cancel | poll.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_poll_cancel | poll.h | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_waitid_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_waitid_cancel | waitid.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_waitid_cancel | waitid.h | function parameter |
| io_cancel_data | cancel.h | data | io_cancel_req_match | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | io_cancel_req_match | cancel.h | function parameter |
| io_cancel_data | cancel.h | data | io_cancel_req_match | poll.c | function parameter |
| io_cancel_data | cancel.h | data | io_cancel_req_match | timeout.c | function parameter |
| io_cancel_data | cancel.h | data | io_cancel_cb | cancel.c | local variable, return value |
| io_cancel_data | cancel.h | data | io_async_cancel_one | cancel.c | function parameter, local variable |
| io_cancel_data | cancel.h | data | io_try_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | io_try_cancel | cancel.h | function parameter |
| io_cancel_data | cancel.h | data | io_try_cancel | timeout.c | function parameter |
| io_cancel_data | cancel.h | data | io_async_cancel_prep | cancel.c | local variable |
| io_cancel_data | cancel.h | data | io_async_cancel_prep | cancel.h | local variable |
| io_cancel_data | cancel.h | data | __io_async_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | io_async_cancel | cancel.c | local variable, return value |
| io_cancel_data | cancel.h | data | io_async_cancel | cancel.h | local variable, return value |
| io_cancel_data | cancel.h | data | __io_sync_cancel | cancel.c | function parameter, local variable, return value |
| io_cancel_data | cancel.h | data | __io_futex_cancel | futex.c | local variable |
| io_cancel_data | cancel.h | data | io_futex_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | io_futex_cancel | futex.c | function parameter |
| io_cancel_data | cancel.h | data | io_futex_cancel | futex.h | function parameter |
| io_cancel_data | cancel.h | data | io_futex_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | io_futex_cancel | futex.c | function parameter |
| io_cancel_data | cancel.h | data | io_futex_cancel | futex.h | function parameter |
| io_cancel_data | cancel.h | data | io_poll_remove_all | io_uring.c | local variable |
| io_cancel_data | cancel.h | data | io_poll_remove_all | poll.c | local variable |
| io_cancel_data | cancel.h | data | io_poll_remove_all | poll.h | local variable |
| io_cancel_data | cancel.h | data | io_poll_find | poll.c | function parameter, local variable |
| io_cancel_data | cancel.h | data | io_poll_file_find | poll.c | function parameter |
| io_cancel_data | cancel.h | data | io_poll_disarm | poll.c | local variable |
| io_cancel_data | cancel.h | data | __io_poll_cancel | poll.c | function parameter, local variable |
| io_cancel_data | cancel.h | data | io_poll_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | io_poll_cancel | poll.c | function parameter |
| io_cancel_data | cancel.h | data | io_poll_cancel | poll.h | function parameter |
| io_cancel_data | cancel.h | data | io_poll_remove | poll.c | local variable, return value |
| io_cancel_data | cancel.h | data | io_poll_remove | poll.h | local variable, return value |
| io_cancel_data | cancel.h | data | io_poll_multishot_retry | poll.h | local variable |
| io_cancel_data | cancel.h | data | io_poll_multishot_retry | rw.c | local variable |
| io_cancel_data | cancel.h | data | io_timeout_fn | timeout.c | local variable |
| io_cancel_data | cancel.h | data | io_req_task_link_timeout | timeout.c | local variable, return value |
| io_cancel_data | cancel.h | data | io_timeout_get_clock | timeout.c | local variable, return value |
| io_cancel_data | cancel.h | data | io_timeout_remove | timeout.c | local variable, return value |
| io_cancel_data | cancel.h | data | io_timeout_remove | timeout.h | local variable, return value |
| io_cancel_data | cancel.h | data | io_disarm_linked_timeout | timeout.c | local variable |
| io_cancel_data | cancel.h | data | io_disarm_linked_timeout | timeout.h | local variable |
| io_cancel_data | cancel.h | data | __io_waitid_cancel | waitid.c | local variable |
| io_cancel_data | cancel.h | data | io_waitid_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | io_waitid_cancel | waitid.c | function parameter |
| io_cancel_data | cancel.h | data | io_waitid_cancel | waitid.h | function parameter |
| io_epoll | epoll.c | epfd, op, fd, event | io_epoll_ctl_prep | epoll.c | local variable, return value |
| io_epoll | epoll.c | epfd, op, fd, event | io_epoll_ctl_prep | epoll.h | local variable, return value |
| io_epoll | epoll.c | epfd, op, fd, event | io_epoll_ctl | epoll.c | local variable, return value |
| io_epoll | epoll.c | epfd, op, fd, event | io_epoll_ctl | epoll.h | local variable, return value |
| io_epoll_wait | epoll.c | maxevents | io_epoll_wait_prep | epoll.c | local variable, return value |
| io_epoll_wait | epoll.c | maxevents | io_epoll_wait_prep | epoll.h | local variable, return value |
| io_epoll_wait | epoll.c | maxevents | io_epoll_wait | epoll.c | local variable, return value |
| io_epoll_wait | epoll.c | maxevents | io_epoll_wait | epoll.h | local variable, return value |
| io_epoll_wait | epoll.c | maxevents | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_free | eventfd.c | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_put | eventfd.c | function parameter |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_do_signal | eventfd.c | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_release | eventfd.c | function parameter, local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | __io_eventfd_signal | eventfd.c | function parameter, local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_trigger | eventfd.c | function parameter, local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_grab | eventfd.c | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_signal | eventfd.c | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_signal | eventfd.h | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_signal | io_uring.c | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_flush_signal | eventfd.c | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_flush_signal | eventfd.h | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_flush_signal | io_uring.c | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_register | eventfd.c | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_register | eventfd.h | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_register | register.c | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_unregister | eventfd.c | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_unregister | eventfd.h | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_unregister | io_uring.c | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_unregister | register.c | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_unregister | register.h | local variable, return value |
| io_rename | fs.c | old_dfd, new_dfd, flags | io_renameat_prep | fs.c | local variable, return value |
| io_rename | fs.c | old_dfd, new_dfd, flags | io_renameat_prep | fs.h | local variable, return value |
| io_rename | fs.c | old_dfd, new_dfd, flags | io_renameat | fs.c | local variable, return value |
| io_rename | fs.c | old_dfd, new_dfd, flags | io_renameat | fs.h | local variable, return value |
| io_rename | fs.c | old_dfd, new_dfd, flags | io_renameat_cleanup | fs.c | local variable, return value |
| io_rename | fs.c | old_dfd, new_dfd, flags | io_renameat_cleanup | fs.h | local variable, return value |
| io_unlink | fs.c | dfd, flags | io_unlinkat_prep | fs.c | local variable, return value |
| io_unlink | fs.c | dfd, flags | io_unlinkat_prep | fs.h | local variable, return value |
| io_unlink | fs.c | dfd, flags | io_unlinkat | fs.c | local variable, return value |
| io_unlink | fs.c | dfd, flags | io_unlinkat | fs.h | local variable, return value |
| io_unlink | fs.c | dfd, flags | io_unlinkat_cleanup | fs.c | local variable, return value |
| io_unlink | fs.c | dfd, flags | io_unlinkat_cleanup | fs.h | local variable, return value |
| io_mkdir | fs.c | dfd, mode | io_mkdirat_prep | fs.c | local variable, return value |
| io_mkdir | fs.c | dfd, mode | io_mkdirat_prep | fs.h | local variable, return value |
| io_mkdir | fs.c | dfd, mode | io_mkdirat | fs.c | local variable, return value |
| io_mkdir | fs.c | dfd, mode | io_mkdirat | fs.h | local variable, return value |
| io_mkdir | fs.c | dfd, mode | io_mkdirat_cleanup | fs.c | local variable, return value |
| io_mkdir | fs.c | dfd, mode | io_mkdirat_cleanup | fs.h | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_symlinkat_prep | fs.c | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_symlinkat_prep | fs.h | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_symlinkat | fs.c | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_symlinkat | fs.h | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_linkat_prep | fs.c | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_linkat_prep | fs.h | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_linkat | fs.c | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_linkat | fs.h | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_link_cleanup | fs.c | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_link_cleanup | fs.h | local variable, return value |
| io_futex | futex.c |  | io_futexv_complete | futex.c | local variable, return value |
| io_futex | futex.c |  | io_futexv_claim | futex.c | function parameter |
| io_futex | futex.c |  | __io_futex_cancel | futex.c | local variable, return value |
| io_futex | futex.c |  | io_futex_prep | futex.c | local variable, return value |
| io_futex | futex.c |  | io_futex_prep | futex.h | local variable, return value |
| io_futex | futex.c |  | io_futex_wakev_fn | futex.c | local variable, return value |
| io_futex | futex.c |  | io_futexv_prep | futex.c | local variable, return value |
| io_futex | futex.c |  | io_futexv_prep | futex.h | local variable, return value |
| io_futex | futex.c |  | io_futexv_wait | futex.c | local variable, return value |
| io_futex | futex.c |  | io_futexv_wait | futex.h | local variable, return value |
| io_futex | futex.c |  | io_futex_wait | futex.c | local variable, return value |
| io_futex | futex.c |  | io_futex_wait | futex.h | local variable, return value |
| io_futex | futex.c |  | io_futex_wake | futex.c | local variable, return value |
| io_futex | futex.c |  | io_futex_wake | futex.h | local variable, return value |
| io_futex_data | futex.c | q | io_futex_cache_init | futex.c | local variable |
| io_futex_data | futex.c | q | io_futex_cache_init | futex.h | local variable |
| io_futex_data | futex.c | q | io_futex_cache_init | io_uring.c | local variable |
| io_futex_data | futex.c | q | __io_futex_cancel | futex.c | local variable, return value |
| io_futex_data | futex.c | q | io_futex_wake_fn | futex.c | local variable, return value |
| io_futex_data | futex.c | q | io_futex_wait | futex.c | local variable, return value |
| io_futex_data | futex.c | q | io_futex_wait | futex.h | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_get | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_release | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_work_get_acct | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_get_acct | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_stopped | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_stopped | io-wq.h | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_stopped | io_uring.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_cancel_cb | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_task_worker_match | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_exit | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | __io_acct_run_queue | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_create_worker | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_inc_running | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | create_worker_cb | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_queue_worker_create | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_dec_running | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | __io_worker_busy | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wait_on_hash | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_assign_current_work | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_running | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_running | io-wq.h | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_sleeping | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_sleeping | io-wq.h | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_init_new_worker | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_work_match_all | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_should_retry_thread | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | queue_create_worker_retry | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | create_worker_cont | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_workqueue_create | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | create_io_worker | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_wake | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_hash_work | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_hash_work | io-wq.h | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_hash_work | io_uring.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | __io_wq_worker_cancel | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_cancel | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_task_work_match | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_cancel_tw_create | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_put_and_exit | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_put_and_exit | io-wq.h | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_put_and_exit | tctx.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_affinity | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_worker_release | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_get_acct | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_work_get_acct | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_worker_cancel_cb | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_worker_exit | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | __io_acct_run_queue | io-wq.c | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_create_worker | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_inc_running | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | create_worker_cb | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_queue_worker_create | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_dec_running | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | __io_worker_busy | io-wq.c | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wait_on_hash | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_assign_current_work | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_worker | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_worker_sleeping | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_worker_sleeping | io-wq.h | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_init_new_worker | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | create_worker_cont | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_workqueue_create | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | create_io_worker | io-wq.c | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_run_cancel | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_insert_work | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_enqueue | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_enqueue | io-wq.h | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_enqueue | io_uring.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_worker_cancel | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_remove_pending | io-wq.c | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_acct_cancel_pending_work | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_cancel_pending_work | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_acct_cancel_running_work | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_hash_wake | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_create | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_create | io-wq.h | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_create | tctx.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_max_workers | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_max_workers | io-wq.h | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_max_workers | register.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_max_workers | tctx.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_cancel_cb | cancel.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_async_cancel_one | cancel.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_worker_release | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_get_acct | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_work_get_acct | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_get_acct | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_worker_ref_put | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_worker_cancel_cb | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_worker_exit | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_acct_run_queue | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_create_worker | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | create_worker_cb | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_queue_worker_create | io-wq.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_dec_running | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_worker_busy | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_get_work_hash | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wait_on_hash | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_assign_current_work | io-wq.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_worker | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_worker_sleeping | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_worker_sleeping | io-wq.h | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_init_new_worker | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_work_match_all | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | create_worker_cont | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_workqueue_create | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | create_io_worker | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_worker_wake | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_run_cancel | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_insert_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_work_match_item | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_enqueue | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_enqueue | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_enqueue | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_hash_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_hash_work | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_hash_work | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_wq_worker_cancel | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_worker_cancel | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_remove_pending | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_acct_cancel_pending_work | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_pending_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_acct_cancel_running_work | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_running_work | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_cb | cancel.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_cb | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_cb | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_cb | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_hash_wake | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_create | io-wq.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_create | io-wq.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_create | tctx.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_task_work_match | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_exit_start | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_exit_start | io-wq.h | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_exit_start | io_uring.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_tw_create | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_exit_workers | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_destroy | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_and_exit | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_and_exit | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_and_exit | tctx.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_worker_affinity | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_wq_cpu_online | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cpu_online | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cpu_offline | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cpu_affinity | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cpu_affinity | io-wq.h | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cpu_affinity | register.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cpu_affinity | sqpoll.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_max_workers | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_max_workers | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_max_workers | register.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_max_workers | tctx.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_hash | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_hash | io-wq.h | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_hash | io_uring.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_is_hashed | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_is_hashed | io-wq.h | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_is_hashed | io_uring.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_queue_iowq | io_uring.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_free_work | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_free_work | io_uring.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_submit_work | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_submit_work | io_uring.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_cancel_ctx_cb | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_ring_exit_work | io_uring.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_ring_exit_work | sqpoll.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_cancel_task_cb | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_try_cancel_iowq | io_uring.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_try_cancel_iowq | tctx.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_try_cancel_requests | io_uring.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | advise.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | alloc_cache.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | alloc_cache.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | cancel.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | cancel.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | epoll.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | eventfd.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | fdinfo.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | filetable.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | fs.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | futex.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | io-wq.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | io-wq.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | io_uring.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | io_uring.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | kbuf.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | kbuf.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | memmap.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | msg_ring.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | napi.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | napi.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | net.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | nop.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | notif.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | notif.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | opdef.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | openclose.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | poll.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | refs.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | register.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | rsrc.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | rsrc.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | rw.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | slist.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | splice.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | sqpoll.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | statx.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | sync.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | tctx.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | tctx.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | timeout.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | timeout.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | truncate.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | uring_cmd.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | waitid.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | xattr.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | zcrx.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_cancel_generic | io_uring.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_cancel_generic | io_uring.h | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_cancel_generic | sqpoll.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_unregister_iowq_aff | register.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_add_after | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_add_after | slist.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_add_tail | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_add_tail | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_add_tail | io_uring.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_add_tail | slist.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_add_head | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_add_head | slist.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_cut | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_cut | rw.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_cut | slist.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __wq_list_splice | slist.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_splice | slist.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_stack_add_head | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_stack_add_head | slist.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_del | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_del | slist.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_stack_extract | io_uring.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_stack_extract | slist.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_next_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_next_work | slist.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_uring_free | io_uring.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_uring_free | tctx.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_alloc_task_context | io_uring.h | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_alloc_task_context | sqpoll.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_alloc_task_context | tctx.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_alloc_task_context | tctx.h | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_uring_add_tctx_node | io_uring.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_uring_add_tctx_node | tctx.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_uring_add_tctx_node | tctx.h | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_clean_tctx | io_uring.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_clean_tctx | tctx.c | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_clean_tctx | tctx.h | local variable, return value |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | create_worker_cont | io-wq.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_enqueue | io-wq.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_enqueue | io-wq.h | local variable, return value |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_enqueue | io_uring.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_hash_work | io-wq.c | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_hash_work | io-wq.h | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_hash_work | io_uring.c | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | __io_wq_worker_cancel | io-wq.c | function parameter |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_worker_cancel | io-wq.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_remove_pending | io-wq.c | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_acct_cancel_pending_work | io-wq.c | function parameter, local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_cancel_pending_work | io-wq.c | function parameter, local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_acct_cancel_running_work | io-wq.c | function parameter, local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_cancel_running_work | io-wq.c | function parameter |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_cancel_cb | cancel.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_cancel_cb | io-wq.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_cancel_cb | io-wq.h | local variable, return value |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_cancel_cb | io_uring.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_destroy | io-wq.c | local variable, return value |
| online_data | io-wq.c | cpu, online | io_wq_put_and_exit | io-wq.c | local variable |
| online_data | io-wq.c | cpu, online | io_wq_put_and_exit | io-wq.h | local variable |
| online_data | io-wq.c | cpu, online | io_wq_put_and_exit | tctx.c | local variable |
| online_data | io-wq.c | cpu, online | io_wq_worker_affinity | io-wq.c | local variable, return value |
| online_data | io-wq.c | cpu, online | __io_wq_cpu_online | io-wq.c | local variable, return value |
| io_wq_hash | io-wq.h | refs, map, wait | io_wq_put_hash | io-wq.c | function parameter, local variable |
| io_wq_hash | io-wq.h | refs, map, wait | io_wq_put_hash | io-wq.h | function parameter, local variable |
| io_wq_hash | io-wq.h | refs, map, wait | io_wq_put_hash | io_uring.c | function parameter, local variable |
| io_wq_hash | io-wq.h | refs, map, wait | io_init_wq_offload | tctx.c | local variable |
| io_wq_data | io-wq.h |  | io_wq_hash_wake | io-wq.c | local variable |
| io_wq_data | io-wq.h |  | io_wq_create | io-wq.c | function parameter |
| io_wq_data | io-wq.h |  | io_wq_create | io-wq.h | function parameter |
| io_wq_data | io-wq.h |  | io_wq_create | tctx.c | function parameter |
| io_wq_data | io-wq.h |  | io_wq_put_hash | io-wq.c | local variable |
| io_wq_data | io-wq.h |  | io_wq_put_hash | io-wq.h | local variable |
| io_wq_data | io-wq.h |  | io_wq_put_hash | io_uring.c | local variable |
| io_wq_data | io-wq.h |  | io_init_wq_offload | tctx.c | local variable |
| io_defer_entry | io_uring.c | list, seq | io_queue_deferred | io_uring.c | local variable, return value |
| io_defer_entry | io_uring.c | list, seq | io_get_sequence | io_uring.c | local variable |
| io_defer_entry | io_uring.c | list, seq | io_cancel_defer_files | io_uring.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_cqring_schedule_timeout | io_uring.c | local variable |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | __io_cqring_wait_schedule | io_uring.c | function parameter, local variable |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_cqring_wait_schedule | io_uring.c | function parameter, local variable |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_cqring_wait | io_uring.c | function parameter, local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_validate_ext_arg | io_uring.c | local variable |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_get_ext_arg | io_uring.c | function parameter, local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | advise.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | alloc_cache.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | alloc_cache.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | cancel.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | cancel.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | epoll.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | eventfd.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | fdinfo.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | filetable.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | fs.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | futex.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | io-wq.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | io-wq.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | io_uring.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | io_uring.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | kbuf.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | kbuf.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | memmap.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | msg_ring.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | napi.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | napi.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | net.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | nop.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | notif.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | notif.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | opdef.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | openclose.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | poll.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | refs.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | register.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | rsrc.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | rsrc.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | rw.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | slist.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | splice.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | sqpoll.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | statx.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | sync.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | tctx.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | tctx.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | timeout.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | timeout.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | truncate.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | uring_cmd.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | waitid.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | xattr.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | zcrx.c | local variable, return value |
| io_tctx_exit | io_uring.c | task_work, completion | io_uring_poll | io_uring.c | local variable |
| io_tctx_exit | io_uring.c | task_work, completion | io_tctx_exit_cb | io_uring.c | local variable, return value |
| io_tctx_exit | io_uring.c | task_work, completion | io_ring_exit_work | io_uring.c | local variable |
| io_tctx_exit | io_uring.c | task_work, completion | io_ring_exit_work | sqpoll.c | local variable |
| io_task_cancel | io_uring.c | all | io_uring_release | io_uring.c | local variable |
| io_task_cancel | io_uring.c | all | io_cancel_task_cb | io_uring.c | local variable, return value |
| io_task_cancel | io_uring.c | all | io_uring_try_cancel_requests | io_uring.c | local variable, return value |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_wake_function | io_uring.c | local variable, return value |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_timer_wakeup | io_uring.c | local variable, return value |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_min_timer_wakeup | io_uring.c | local variable, return value |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_schedule_timeout | io_uring.c | function parameter, local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | __io_cqring_wait_schedule | io_uring.c | function parameter, local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_wait_schedule | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_wait | io_uring.c | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_should_wake | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_should_wake | io_uring.h | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_should_wake | napi.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop_should_end | napi.c | local variable, return value |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_blocking_busy_loop | napi.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_unregister_napi | napi.c | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_unregister_napi | napi.h | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_unregister_napi | register.c | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | __io_napi_busy_loop | napi.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | __io_napi_busy_loop | napi.h | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi | napi.h | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi | sqpoll.c | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop | napi.h | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_add | napi.h | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_add | poll.c | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop | napi.h | function parameter |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_remove_buffers_prep | kbuf.c | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_remove_buffers_prep | kbuf.h | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_remove_buffers | kbuf.c | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_remove_buffers | kbuf.h | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_provide_buffers_prep | kbuf.c | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_provide_buffers_prep | kbuf.h | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_add_buffers | kbuf.c | function parameter |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_provide_buffers | kbuf.c | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_provide_buffers | kbuf.h | local variable, return value |
| io_buffer_list | kbuf.h | buf_list | io_kbuf_inc_commit | kbuf.c | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_kbuf_commit | kbuf.c | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_kbuf_commit | kbuf.h | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffer_get_list | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffer_add_list | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_kbuf_recycle_legacy | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_kbuf_recycle_legacy | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | io_provided_buffer_select | kbuf.c | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_provided_buffers_select | kbuf.c | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_ring_buffer_select | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_buffer_select | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffer_select | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffer_select | net.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffer_select | rw.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_ring_buffers_peek | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_buffers_select | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffers_select | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffers_select | net.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffers_peek | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffers_peek | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffers_peek | net.c | local variable |
| io_buffer_list | kbuf.h | buf_list | __io_put_kbuf_ring | kbuf.c | local variable, return value |
| io_buffer_list | kbuf.h | buf_list | __io_put_kbufs | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | __io_put_kbufs | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | __io_remove_buffers | kbuf.c | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_put_bl | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_destroy_buffers | io_uring.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_destroy_buffers | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_destroy_buffers | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | io_destroy_bl | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_remove_buffers | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_remove_buffers | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | io_provide_buffers_prep | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_provide_buffers_prep | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | io_add_buffers | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_provide_buffers | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_provide_buffers | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | io_register_pbuf_ring | kbuf.c | local variable, return value |
| io_buffer_list | kbuf.h | buf_list | io_register_pbuf_ring | kbuf.h | local variable, return value |
| io_buffer_list | kbuf.h | buf_list | io_register_pbuf_ring | register.c | local variable, return value |
| io_buffer_list | kbuf.h | buf_list | io_unregister_pbuf_ring | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_unregister_pbuf_ring | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | io_unregister_pbuf_ring | register.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_register_pbuf_status | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_register_pbuf_status | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | io_register_pbuf_status | register.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_pbuf_get_region | kbuf.c | local variable |
| io_buffer_list | kbuf.h | buf_list | io_pbuf_get_region | kbuf.h | local variable |
| io_buffer_list | kbuf.h | buf_list | io_pbuf_get_region | memmap.c | local variable |
