| Structure name | Defined in | Attributes | Caller Functions Source | Source Caller | Usage |
|---|---|---|---|---|---|
| io_fadvise | advise.c | file, offset, len, advice | io_madvise | advise.c | local variable |
| io_fadvise | advise.c | file, offset, len, advice | io_madvise | advise.h | local variable |
| io_fadvise | advise.c | file, offset, len, advice | io_fadvise_force_async | advise.c | function parameter |
| io_fadvise | advise.c | file, offset, len, advice | io_fadvise_prep | advise.c | local variable, return value |
| io_fadvise | advise.c | file, offset, len, advice | io_fadvise_prep | advise.h | local variable, return value |
| io_fadvise | advise.c | file, offset, len, advice | io_fadvise | advise.c | local variable, return value |
| io_fadvise | advise.c | file, offset, len, advice | io_fadvise | advise.h | local variable, return value |
| io_fadvise | advise.c | file, offset, len, advice | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_madvise | advise.c | file, addr, len, advice | io_madvise_prep | advise.c | local variable, return value |
| io_madvise | advise.c | file, addr, len, advice | io_madvise_prep | advise.h | local variable, return value |
| io_madvise | advise.c | file, addr, len, advice | io_madvise | advise.c | local variable, return value |
| io_madvise | advise.c | file, addr, len, advice | io_madvise | advise.h | local variable, return value |
| io_madvise | advise.c | file, addr, len, advice | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_cancel_req_match | cancel.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_cancel_req_match | cancel.h | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_cancel_req_match | poll.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_cancel_req_match | timeout.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_async_cancel_one | cancel.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_try_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_try_cancel | cancel.h | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_try_cancel | timeout.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_async_cancel_prep | cancel.c | local variable, return value |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_async_cancel_prep | cancel.h | local variable, return value |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | __io_async_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_async_cancel | cancel.c | local variable, return value |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_async_cancel | cancel.h | local variable, return value |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | __io_sync_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_futex_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_futex_cancel | futex.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_futex_cancel | futex.h | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_futex_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_futex_cancel | futex.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_futex_cancel | futex.h | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_poll_find | poll.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_poll_file_find | poll.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | __io_poll_cancel | poll.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_poll_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_poll_cancel | poll.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_poll_cancel | poll.h | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_waitid_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_waitid_cancel | waitid.c | function parameter |
| io_cancel | cancel.c | file, addr, flags, fd, opcode | io_waitid_cancel | waitid.h | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_cancel_req_match | cancel.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_cancel_req_match | cancel.h | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_cancel_req_match | poll.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_cancel_req_match | timeout.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_cancel_cb | cancel.c | local variable, return value |
| io_cancel_data | cancel.h | ctx, data, file | io_async_cancel_one | cancel.c | function parameter, local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_try_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_try_cancel | cancel.h | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_try_cancel | timeout.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_async_cancel_prep | cancel.c | local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_async_cancel_prep | cancel.h | local variable |
| io_cancel_data | cancel.h | ctx, data, file | __io_async_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_async_cancel | cancel.c | local variable, return value |
| io_cancel_data | cancel.h | ctx, data, file | io_async_cancel | cancel.h | local variable, return value |
| io_cancel_data | cancel.h | ctx, data, file | __io_sync_cancel | cancel.c | function parameter, local variable, return value |
| io_cancel_data | cancel.h | ctx, data, file | __io_futex_cancel | futex.c | local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_futex_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_futex_cancel | futex.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_futex_cancel | futex.h | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_futex_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_futex_cancel | futex.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_futex_cancel | futex.h | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_remove_all | io_uring.c | local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_remove_all | poll.c | local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_remove_all | poll.h | local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_find | poll.c | function parameter, local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_file_find | poll.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_disarm | poll.c | local variable |
| io_cancel_data | cancel.h | ctx, data, file | __io_poll_cancel | poll.c | function parameter, local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_cancel | poll.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_cancel | poll.h | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_remove | poll.c | local variable, return value |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_remove | poll.h | local variable, return value |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_multishot_retry | poll.h | local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_poll_multishot_retry | rw.c | local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_timeout_fn | timeout.c | local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_req_task_link_timeout | timeout.c | local variable, return value |
| io_cancel_data | cancel.h | ctx, data, file | io_timeout_get_clock | timeout.c | local variable, return value |
| io_cancel_data | cancel.h | ctx, data, file | io_timeout_remove | timeout.c | local variable, return value |
| io_cancel_data | cancel.h | ctx, data, file | io_timeout_remove | timeout.h | local variable, return value |
| io_cancel_data | cancel.h | ctx, data, file | io_disarm_linked_timeout | timeout.c | local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_disarm_linked_timeout | timeout.h | local variable |
| io_cancel_data | cancel.h | ctx, data, file | __io_waitid_cancel | waitid.c | local variable |
| io_cancel_data | cancel.h | ctx, data, file | io_waitid_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_waitid_cancel | waitid.c | function parameter |
| io_cancel_data | cancel.h | ctx, data, file | io_waitid_cancel | waitid.h | function parameter |
| io_epoll | epoll.c | file, epfd, op, fd, event | io_epoll_ctl_prep | epoll.c | local variable, return value |
| io_epoll | epoll.c | file, epfd, op, fd, event | io_epoll_ctl_prep | epoll.h | local variable, return value |
| io_epoll | epoll.c | file, epfd, op, fd, event | io_epoll_ctl | epoll.c | local variable, return value |
| io_epoll | epoll.c | file, epfd, op, fd, event | io_epoll_ctl | epoll.h | local variable, return value |
| io_epoll_wait | epoll.c | file, maxevents, events | io_epoll_wait_prep | epoll.c | local variable, return value |
| io_epoll_wait | epoll.c | file, maxevents, events | io_epoll_wait_prep | epoll.h | local variable, return value |
| io_epoll_wait | epoll.c | file, maxevents, events | io_epoll_wait | epoll.c | local variable, return value |
| io_epoll_wait | epoll.c | file, maxevents, events | io_epoll_wait | epoll.h | local variable, return value |
| io_epoll_wait | epoll.c | file, maxevents, events | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_free | eventfd.c | local variable, return value |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_put | eventfd.c | function parameter |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_do_signal | eventfd.c | local variable, return value |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_release | eventfd.c | function parameter, local variable |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | __io_eventfd_signal | eventfd.c | function parameter, local variable |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_trigger | eventfd.c | function parameter, local variable |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_grab | eventfd.c | local variable, return value |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_signal | eventfd.c | local variable |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_signal | eventfd.h | local variable |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_signal | io_uring.c | local variable |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_flush_signal | eventfd.c | local variable |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_flush_signal | eventfd.h | local variable |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_flush_signal | io_uring.c | local variable |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_register | eventfd.c | local variable, return value |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_register | eventfd.h | local variable, return value |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_register | register.c | local variable, return value |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_unregister | eventfd.c | local variable, return value |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_unregister | eventfd.h | local variable, return value |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_unregister | io_uring.c | local variable, return value |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_unregister | register.c | local variable, return value |
| io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_unregister | register.h | local variable, return value |
| io_rename | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_renameat_prep | fs.c | local variable, return value |
| io_rename | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_renameat_prep | fs.h | local variable, return value |
| io_rename | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_renameat | fs.c | local variable, return value |
| io_rename | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_renameat | fs.h | local variable, return value |
| io_rename | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_renameat_cleanup | fs.c | local variable, return value |
| io_rename | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_renameat_cleanup | fs.h | local variable, return value |
| io_unlink | fs.c | file, dfd, flags, filename | io_unlinkat_prep | fs.c | local variable, return value |
| io_unlink | fs.c | file, dfd, flags, filename | io_unlinkat_prep | fs.h | local variable, return value |
| io_unlink | fs.c | file, dfd, flags, filename | io_unlinkat | fs.c | local variable, return value |
| io_unlink | fs.c | file, dfd, flags, filename | io_unlinkat | fs.h | local variable, return value |
| io_unlink | fs.c | file, dfd, flags, filename | io_unlinkat_cleanup | fs.c | local variable, return value |
| io_unlink | fs.c | file, dfd, flags, filename | io_unlinkat_cleanup | fs.h | local variable, return value |
| io_mkdir | fs.c | file, dfd, mode, filename | io_mkdirat_prep | fs.c | local variable, return value |
| io_mkdir | fs.c | file, dfd, mode, filename | io_mkdirat_prep | fs.h | local variable, return value |
| io_mkdir | fs.c | file, dfd, mode, filename | io_mkdirat | fs.c | local variable, return value |
| io_mkdir | fs.c | file, dfd, mode, filename | io_mkdirat | fs.h | local variable, return value |
| io_mkdir | fs.c | file, dfd, mode, filename | io_mkdirat_cleanup | fs.c | local variable, return value |
| io_mkdir | fs.c | file, dfd, mode, filename | io_mkdirat_cleanup | fs.h | local variable, return value |
| io_link | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_symlinkat_prep | fs.c | local variable, return value |
| io_link | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_symlinkat_prep | fs.h | local variable, return value |
| io_link | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_symlinkat | fs.c | local variable, return value |
| io_link | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_symlinkat | fs.h | local variable, return value |
| io_link | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_linkat_prep | fs.c | local variable, return value |
| io_link | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_linkat_prep | fs.h | local variable, return value |
| io_link | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_linkat | fs.c | local variable, return value |
| io_link | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_linkat | fs.h | local variable, return value |
| io_link | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_link_cleanup | fs.c | local variable, return value |
| io_link | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | io_link_cleanup | fs.h | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futexv_complete | futex.c | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futexv_claim | futex.c | function parameter |
| io_futex | futex.c | file, uaddr, uwaitv | __io_futex_cancel | futex.c | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futex_prep | futex.c | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futex_prep | futex.h | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futex_wakev_fn | futex.c | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futexv_prep | futex.c | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futexv_prep | futex.h | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futexv_wait | futex.c | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futexv_wait | futex.h | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futex_wait | futex.c | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futex_wait | futex.h | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futex_wake | futex.c | local variable, return value |
| io_futex | futex.c | file, uaddr, uwaitv | io_futex_wake | futex.h | local variable, return value |
| io_futex_data | futex.c | q, req | io_futex_cache_init | futex.c | local variable |
| io_futex_data | futex.c | q, req | io_futex_cache_init | futex.h | local variable |
| io_futex_data | futex.c | q, req | io_futex_cache_init | io_uring.c | local variable |
| io_futex_data | futex.c | q, req | __io_futex_cancel | futex.c | local variable, return value |
| io_futex_data | futex.c | q, req | io_futex_wake_fn | futex.c | local variable, return value |
| io_futex_data | futex.c | q, req | io_futex_wait | futex.c | local variable, return value |
| io_futex_data | futex.c | q, req | io_futex_wait | futex.h | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_get | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_release | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_work_get_acct | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_get_acct | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_stopped | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_stopped | io-wq.h | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_stopped | io_uring.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_cancel_cb | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_task_worker_match | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_exit | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | __io_acct_run_queue | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_create_worker | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_inc_running | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | create_worker_cb | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_queue_worker_create | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_dec_running | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | __io_worker_busy | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wait_on_hash | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_assign_current_work | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_running | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_running | io-wq.h | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_sleeping | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_sleeping | io-wq.h | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_init_new_worker | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_work_match_all | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_should_retry_thread | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | queue_create_worker_retry | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | create_worker_cont | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_workqueue_create | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | create_io_worker | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_wake | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_hash_work | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_hash_work | io-wq.h | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_hash_work | io_uring.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | __io_wq_worker_cancel | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_cancel | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_task_work_match | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_cancel_tw_create | io-wq.c | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_put_and_exit | io-wq.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_put_and_exit | io-wq.h | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_put_and_exit | tctx.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_affinity | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_worker_release | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_get_acct | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_work_get_acct | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_worker_cancel_cb | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_worker_exit | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | __io_acct_run_queue | io-wq.c | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_create_worker | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_inc_running | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | create_worker_cb | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_queue_worker_create | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_dec_running | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | __io_worker_busy | io-wq.c | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wait_on_hash | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_assign_current_work | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_worker | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_worker_sleeping | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_worker_sleeping | io-wq.h | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_init_new_worker | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | create_worker_cont | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_workqueue_create | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | create_io_worker | io-wq.c | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_run_cancel | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_insert_work | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_enqueue | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_enqueue | io-wq.h | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_enqueue | io_uring.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_worker_cancel | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_remove_pending | io-wq.c | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_acct_cancel_pending_work | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_cancel_pending_work | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_acct_cancel_running_work | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_hash_wake | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_create | io-wq.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_create | io-wq.h | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_create | tctx.c | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_max_workers | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_max_workers | io-wq.h | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_max_workers | register.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, workers_lock, free_list, workers_lock, all_list, lock, work_list, flags | io_wq_max_workers | tctx.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_cancel_cb | cancel.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_async_cancel_one | cancel.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_worker_release | io-wq.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_get_acct | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_work_get_acct | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_get_acct | io-wq.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_worker_ref_put | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_worker_cancel_cb | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_worker_exit | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | __io_acct_run_queue | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_create_worker | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | create_worker_cb | io-wq.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_queue_worker_create | io-wq.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_dec_running | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | __io_worker_busy | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_get_work_hash | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wait_on_hash | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_assign_current_work | io-wq.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_worker | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_worker_sleeping | io-wq.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_worker_sleeping | io-wq.h | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_init_new_worker | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_work_match_all | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | create_worker_cont | io-wq.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_workqueue_create | io-wq.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | create_io_worker | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_worker_wake | io-wq.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_run_cancel | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_insert_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_work_match_item | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_enqueue | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_enqueue | io-wq.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_enqueue | io_uring.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_hash_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_hash_work | io-wq.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_hash_work | io_uring.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | __io_wq_worker_cancel | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_worker_cancel | io-wq.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_remove_pending | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_acct_cancel_pending_work | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cancel_pending_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_acct_cancel_running_work | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cancel_running_work | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cancel_cb | cancel.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cancel_cb | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cancel_cb | io-wq.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cancel_cb | io_uring.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_hash_wake | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_create | io-wq.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_create | io-wq.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_create | tctx.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_task_work_match | io-wq.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_exit_start | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_exit_start | io-wq.h | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_exit_start | io_uring.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cancel_tw_create | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_exit_workers | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_destroy | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_put_and_exit | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_put_and_exit | io-wq.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_put_and_exit | tctx.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_worker_affinity | io-wq.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | __io_wq_cpu_online | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cpu_online | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cpu_offline | io-wq.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cpu_affinity | io-wq.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cpu_affinity | io-wq.h | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cpu_affinity | register.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_cpu_affinity | sqpoll.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_max_workers | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_max_workers | io-wq.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_max_workers | register.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_max_workers | tctx.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_put_hash | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_put_hash | io-wq.h | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_put_hash | io_uring.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_is_hashed | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_is_hashed | io-wq.h | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_is_hashed | io_uring.c | function parameter, local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_queue_iowq | io_uring.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_free_work | io_uring.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_free_work | io_uring.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_submit_work | io_uring.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_wq_submit_work | io_uring.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_cancel_ctx_cb | io_uring.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_ring_exit_work | io_uring.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_ring_exit_work | sqpoll.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_cancel_task_cb | io_uring.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_try_cancel_iowq | io_uring.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_try_cancel_iowq | tctx.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_try_cancel_requests | io_uring.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | advise.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | alloc_cache.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | alloc_cache.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | cancel.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | cancel.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | epoll.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | eventfd.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | fdinfo.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | filetable.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | fs.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | futex.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | io-wq.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | io-wq.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | io_uring.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | io_uring.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | kbuf.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | kbuf.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | memmap.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | msg_ring.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | napi.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | napi.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | net.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | nop.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | notif.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | notif.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | opdef.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | openclose.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | poll.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | refs.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | register.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | rsrc.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | rsrc.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | rw.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | slist.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | splice.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | sqpoll.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | statx.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | sync.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | tctx.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | tctx.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | timeout.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | timeout.h | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | truncate.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | uring_cmd.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | waitid.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | xattr.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | if | zcrx.c | function parameter, local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_cancel_generic | io_uring.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_cancel_generic | io_uring.h | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_cancel_generic | sqpoll.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_unregister_iowq_aff | register.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_add_after | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_add_after | slist.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_add_tail | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_add_tail | io_uring.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_add_tail | io_uring.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_add_tail | slist.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_add_head | io_uring.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_add_head | slist.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_cut | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_cut | rw.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_cut | slist.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | __wq_list_splice | slist.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_splice | slist.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_stack_add_head | io_uring.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_stack_add_head | slist.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_del | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_list_del | slist.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_stack_extract | io_uring.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_stack_extract | slist.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_next_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | wq_next_work | slist.h | function parameter |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | __io_uring_free | io_uring.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | __io_uring_free | tctx.c | local variable |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_alloc_task_context | io_uring.h | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_alloc_task_context | sqpoll.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_alloc_task_context | tctx.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_alloc_task_context | tctx.h | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | __io_uring_add_tctx_node | io_uring.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | __io_uring_add_tctx_node | tctx.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | __io_uring_add_tctx_node | tctx.h | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_clean_tctx | io_uring.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_clean_tctx | tctx.c | local variable, return value |
| io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct, wait, hash_tail, cpu_mask | io_uring_clean_tctx | tctx.h | local variable, return value |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | create_worker_cont | io-wq.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_enqueue | io-wq.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_enqueue | io-wq.h | local variable, return value |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_enqueue | io_uring.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_hash_work | io-wq.c | local variable |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_hash_work | io-wq.h | local variable |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_hash_work | io_uring.c | local variable |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | __io_wq_worker_cancel | io-wq.c | function parameter |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_worker_cancel | io-wq.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_remove_pending | io-wq.c | local variable |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_acct_cancel_pending_work | io-wq.c | function parameter, local variable |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_cancel_pending_work | io-wq.c | function parameter, local variable |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_acct_cancel_running_work | io-wq.c | function parameter, local variable |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_cancel_running_work | io-wq.c | function parameter |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_cancel_cb | cancel.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_cancel_cb | io-wq.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_cancel_cb | io-wq.h | local variable, return value |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_cancel_cb | io_uring.c | local variable, return value |
| io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all | io_wq_destroy | io-wq.c | local variable, return value |
| online_data | io-wq.c | cpu, online | io_wq_put_and_exit | io-wq.c | local variable |
| online_data | io-wq.c | cpu, online | io_wq_put_and_exit | io-wq.h | local variable |
| online_data | io-wq.c | cpu, online | io_wq_put_and_exit | tctx.c | local variable |
| online_data | io-wq.c | cpu, online | io_wq_worker_affinity | io-wq.c | local variable, return value |
| online_data | io-wq.c | cpu, online | __io_wq_cpu_online | io-wq.c | local variable, return value |
| io_wq_hash | io-wq.h | refs, map, wait | io_wq_put_hash | io-wq.c | function parameter, local variable |
| io_wq_hash | io-wq.h | refs, map, wait | io_wq_put_hash | io-wq.h | function parameter, local variable |
| io_wq_hash | io-wq.h | refs, map, wait | io_wq_put_hash | io_uring.c | function parameter, local variable |
| io_wq_hash | io-wq.h | refs, map, wait | io_init_wq_offload | tctx.c | local variable |
| io_wq_data | io-wq.h | hash, task, do_work, free_work | io_wq_hash_wake | io-wq.c | local variable |
| io_wq_data | io-wq.h | hash, task, do_work, free_work | io_wq_create | io-wq.c | function parameter |
| io_wq_data | io-wq.h | hash, task, do_work, free_work | io_wq_create | io-wq.h | function parameter |
| io_wq_data | io-wq.h | hash, task, do_work, free_work | io_wq_create | tctx.c | function parameter |
| io_wq_data | io-wq.h | hash, task, do_work, free_work | io_wq_put_hash | io-wq.c | local variable |
| io_wq_data | io-wq.h | hash, task, do_work, free_work | io_wq_put_hash | io-wq.h | local variable |
| io_wq_data | io-wq.h | hash, task, do_work, free_work | io_wq_put_hash | io_uring.c | local variable |
| io_wq_data | io-wq.h | hash, task, do_work, free_work | io_init_wq_offload | tctx.c | local variable |
| io_defer_entry | io_uring.c | list, req, seq | io_queue_deferred | io_uring.c | local variable, return value |
| io_defer_entry | io_uring.c | list, req, seq | io_get_sequence | io_uring.c | local variable |
| io_defer_entry | io_uring.c | list, req, seq | io_cancel_defer_files | io_uring.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | io_cqring_schedule_timeout | io_uring.c | local variable |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | __io_cqring_wait_schedule | io_uring.c | function parameter, local variable |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | io_cqring_wait_schedule | io_uring.c | function parameter, local variable |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | io_cqring_wait | io_uring.c | function parameter, local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | io_validate_ext_arg | io_uring.c | local variable |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | io_get_ext_arg | io_uring.c | function parameter, local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | advise.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | alloc_cache.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | alloc_cache.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | cancel.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | cancel.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | epoll.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | eventfd.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | fdinfo.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | filetable.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | fs.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | futex.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | io-wq.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | io-wq.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | io_uring.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | io_uring.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | kbuf.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | kbuf.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | memmap.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | msg_ring.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | napi.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | napi.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | net.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | nop.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | notif.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | notif.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | opdef.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | openclose.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | poll.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | refs.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | register.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | rsrc.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | rsrc.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | rw.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | slist.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | splice.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | sqpoll.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | statx.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | sync.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | tctx.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | tctx.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | timeout.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | timeout.h | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | truncate.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | uring_cmd.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | waitid.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | xattr.c | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | if | zcrx.c | local variable, return value |
| io_tctx_exit | io_uring.c | task_work, completion, ctx | io_uring_poll | io_uring.c | local variable |
| io_tctx_exit | io_uring.c | task_work, completion, ctx | io_tctx_exit_cb | io_uring.c | local variable, return value |
| io_tctx_exit | io_uring.c | task_work, completion, ctx | io_ring_exit_work | io_uring.c | local variable |
| io_tctx_exit | io_uring.c | task_work, completion, ctx | io_ring_exit_work | sqpoll.c | local variable |
| io_task_cancel | io_uring.c | tctx, all | io_uring_release | io_uring.c | local variable |
| io_task_cancel | io_uring.c | tctx, all | io_cancel_task_cb | io_uring.c | local variable, return value |
| io_task_cancel | io_uring.c | tctx, all | io_uring_try_cancel_requests | io_uring.c | local variable, return value |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_wake_function | io_uring.c | local variable, return value |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_cqring_timer_wakeup | io_uring.c | local variable, return value |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_cqring_min_timer_wakeup | io_uring.c | local variable, return value |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_cqring_schedule_timeout | io_uring.c | function parameter, local variable |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | __io_cqring_wait_schedule | io_uring.c | function parameter, local variable |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_cqring_wait_schedule | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_cqring_wait | io_uring.c | local variable |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_should_wake | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_should_wake | io_uring.h | function parameter |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_should_wake | napi.c | function parameter |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_napi_busy_loop_should_end | napi.c | local variable, return value |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_napi_blocking_busy_loop | napi.c | function parameter |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_unregister_napi | napi.c | local variable |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_unregister_napi | napi.h | local variable |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_unregister_napi | register.c | local variable |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | __io_napi_busy_loop | napi.c | function parameter |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | __io_napi_busy_loop | napi.h | function parameter |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_napi | napi.h | local variable |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_napi | sqpoll.c | local variable |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_napi_busy_loop | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_napi_busy_loop | napi.h | function parameter |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_napi_add | napi.h | local variable |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_napi_add | poll.c | local variable |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_napi_busy_loop | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, CONFIG_NET_RX_BUSY_POLL, napi_busy_poll_dt, napi_prefer_busy_poll, endif | io_napi_busy_loop | napi.h | function parameter |
| io_provide_buf | kbuf.c | file, addr, len, bgid, nbufs, bid | io_remove_buffers_prep | kbuf.c | local variable, return value |
| io_provide_buf | kbuf.c | file, addr, len, bgid, nbufs, bid | io_remove_buffers_prep | kbuf.h | local variable, return value |
| io_provide_buf | kbuf.c | file, addr, len, bgid, nbufs, bid | io_remove_buffers | kbuf.c | local variable, return value |
| io_provide_buf | kbuf.c | file, addr, len, bgid, nbufs, bid | io_remove_buffers | kbuf.h | local variable, return value |
| io_provide_buf | kbuf.c | file, addr, len, bgid, nbufs, bid | io_provide_buffers_prep | kbuf.c | local variable, return value |
| io_provide_buf | kbuf.c | file, addr, len, bgid, nbufs, bid | io_provide_buffers_prep | kbuf.h | local variable, return value |
| io_provide_buf | kbuf.c | file, addr, len, bgid, nbufs, bid | io_add_buffers | kbuf.c | function parameter |
| io_provide_buf | kbuf.c | file, addr, len, bgid, nbufs, bid | io_provide_buffers | kbuf.c | local variable, return value |
| io_provide_buf | kbuf.c | file, addr, len, bgid, nbufs, bid | io_provide_buffers | kbuf.h | local variable, return value |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_kbuf_inc_commit | kbuf.c | function parameter, local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_kbuf_commit | kbuf.c | function parameter, local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_kbuf_commit | kbuf.h | function parameter, local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffer_get_list | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffer_add_list | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_kbuf_recycle_legacy | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_kbuf_recycle_legacy | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_provided_buffer_select | kbuf.c | function parameter, local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_provided_buffers_select | kbuf.c | function parameter, local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_ring_buffer_select | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffer_select | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffer_select | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffer_select | net.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffer_select | rw.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_ring_buffers_peek | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffers_select | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffers_select | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffers_select | net.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffers_peek | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffers_peek | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_buffers_peek | net.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | __io_put_kbuf_ring | kbuf.c | local variable, return value |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | __io_put_kbufs | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | __io_put_kbufs | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | __io_remove_buffers | kbuf.c | function parameter, local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_put_bl | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_destroy_buffers | io_uring.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_destroy_buffers | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_destroy_buffers | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_destroy_bl | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_remove_buffers | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_remove_buffers | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_provide_buffers_prep | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_provide_buffers_prep | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_add_buffers | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_provide_buffers | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_provide_buffers | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_register_pbuf_ring | kbuf.c | local variable, return value |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_register_pbuf_ring | kbuf.h | local variable, return value |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_register_pbuf_ring | register.c | local variable, return value |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_unregister_pbuf_ring | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_unregister_pbuf_ring | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_unregister_pbuf_ring | register.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_register_pbuf_status | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_register_pbuf_status | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_register_pbuf_status | register.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_pbuf_get_region | kbuf.c | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_pbuf_get_region | kbuf.h | local variable |
| io_buffer_list | kbuf.h | set, not, buf_list, buf_ring | io_pbuf_get_region | memmap.c | local variable |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_kbuf_inc_commit | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_kbuf_commit | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_kbuf_commit | kbuf.h | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_buffer_add_list | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_kbuf_recycle_legacy | kbuf.c | local variable |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_kbuf_recycle_legacy | kbuf.h | local variable |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_provided_buffer_select | kbuf.c | function parameter, local variable, return value |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_provided_buffers_select | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_ring_buffer_select | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_ring_buffers_peek | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | __io_remove_buffers | kbuf.c | function parameter, local variable, return value |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_put_bl | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_destroy_bl | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_add_buffers | kbuf.c | function parameter, local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_buffer_select | kbuf.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_buffer_select | kbuf.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_buffer_select | net.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_buffer_select | rw.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_ring_buffers_peek | kbuf.c | function parameter |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | advise.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | alloc_cache.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | alloc_cache.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | cancel.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | cancel.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | epoll.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | eventfd.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | fdinfo.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | filetable.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | fs.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | futex.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | io-wq.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | io-wq.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | io_uring.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | io_uring.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | kbuf.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | kbuf.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | memmap.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | msg_ring.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | napi.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | napi.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | net.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | nop.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | notif.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | notif.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | opdef.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | openclose.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | poll.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | refs.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | register.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | rsrc.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | rsrc.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | rw.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | slist.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | splice.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | sqpoll.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | statx.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | sync.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | tctx.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | tctx.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | timeout.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | timeout.h | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | truncate.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | uring_cmd.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | waitid.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | xattr.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | if | zcrx.c | local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_buffers_select | kbuf.c | function parameter, local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_buffers_select | kbuf.h | function parameter, local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_buffers_select | net.c | function parameter, local variable |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_buffers_peek | kbuf.c | function parameter |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_buffers_peek | kbuf.h | function parameter |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_buffers_peek | net.c | function parameter |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_send_select_buffer | net.c | local variable, return value |
| buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode | io_recv_buf_select | net.c | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring_cleanup | msg_ring.c | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring_cleanup | msg_ring.h | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_get_kiocb | msg_ring.c | local variable |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_data_remote | msg_ring.c | function parameter, local variable |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | __io_msg_ring_data | msg_ring.c | function parameter |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring_data | msg_ring.c | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_grab_file | msg_ring.c | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_install_complete | msg_ring.c | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_tw_fd_complete | msg_ring.c | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_fd_remote | msg_ring.c | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_send_fd | msg_ring.c | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | __io_msg_ring_prep | msg_ring.c | function parameter |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring_prep | msg_ring.c | local variable |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring_prep | msg_ring.h | local variable |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring | msg_ring.c | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring | msg_ring.h | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_uring_sync_msg_ring | msg_ring.c | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_uring_sync_msg_ring | msg_ring.h | local variable, return value |
| io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_uring_sync_msg_ring | register.c | local variable, return value |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | io_napi_hash_find | napi.c | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | __io_napi_add_id | napi.c | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | __io_napi_add_id | napi.h | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | __io_napi_del_id | napi.c | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | __io_napi_remove_stale | napi.c | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | io_napi_busy_loop_should_end | napi.c | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | io_napi_free | io_uring.c | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | io_napi_free | napi.c | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | io_napi_free | napi.h | local variable |
| io_shutdown | net.c | file, how | io_shutdown_prep | net.c | local variable, return value |
| io_shutdown | net.c | file, how | io_shutdown_prep | net.h | local variable, return value |
| io_shutdown | net.c | file, how | io_shutdown | net.c | local variable, return value |
| io_shutdown | net.c | file, how | io_shutdown | net.h | local variable, return value |
| io_shutdown | net.c | file, how | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_accept | net.c | file, addr, addr_len, flags, iou_flags, file_slot, nofile | io_accept_prep | net.c | local variable, return value |
| io_accept | net.c | file, addr, addr_len, flags, iou_flags, file_slot, nofile | io_accept_prep | net.h | local variable, return value |
| io_accept | net.c | file, addr, addr_len, flags, iou_flags, file_slot, nofile | io_accept | net.c | local variable, return value |
| io_accept | net.c | file, addr, addr_len, flags, iou_flags, file_slot, nofile | io_accept | net.h | local variable, return value |
| io_accept | net.c | file, addr, addr_len, flags, iou_flags, file_slot, nofile | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_socket | net.c | file, domain, type, protocol, flags, file_slot, nofile | io_socket_prep | net.c | local variable, return value |
| io_socket | net.c | file, domain, type, protocol, flags, file_slot, nofile | io_socket_prep | net.h | local variable, return value |
| io_socket | net.c | file, domain, type, protocol, flags, file_slot, nofile | io_socket | net.c | local variable, return value |
| io_socket | net.c | file, domain, type, protocol, flags, file_slot, nofile | io_socket | net.h | local variable, return value |
| io_socket | net.c | file, domain, type, protocol, flags, file_slot, nofile | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_connect | net.c | file, addr, addr_len, in_progress, seen_econnaborted | io_connect_prep | net.c | local variable, return value |
| io_connect | net.c | file, addr, addr_len, in_progress, seen_econnaborted | io_connect_prep | net.h | local variable, return value |
| io_connect | net.c | file, addr, addr_len, in_progress, seen_econnaborted | io_connect | net.c | local variable, return value |
| io_connect | net.c | file, addr, addr_len, in_progress, seen_econnaborted | io_connect | net.h | local variable, return value |
| io_connect | net.c | file, addr, addr_len, in_progress, seen_econnaborted | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_bind | net.c | file, addr_len | io_bind_prep | net.c | local variable, return value |
| io_bind | net.c | file, addr_len | io_bind_prep | net.h | local variable, return value |
| io_bind | net.c | file, addr_len | io_bind | net.c | local variable, return value |
| io_bind | net.c | file, addr_len | io_bind | net.h | local variable, return value |
| io_bind | net.c | file, addr_len | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_listen | net.c | file, backlog | io_listen_prep | net.c | local variable, return value |
| io_listen | net.c | file, backlog | io_listen_prep | net.h | local variable, return value |
| io_listen | net.c | file, backlog | io_listen | net.c | local variable, return value |
| io_listen | net.c | file, backlog | io_listen | net.h | local variable, return value |
| io_listen | net.c | file, backlog | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_mshot_prep_retry | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_compat_msg_copy_hdr | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_msg_copy_hdr | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send_setup | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_sendmsg_setup | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_sendmsg_prep | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_sendmsg_prep | net.h | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send_finish | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_sendmsg | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_sendmsg | net.h | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send_select_buffer | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send | net.h | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_recvmsg_prep_setup | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_recvmsg_prep | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_recvmsg_prep | net.h | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_recv_finish | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_recvmsg_prep_multishot | net.c | function parameter, local variable |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_recvmsg_multishot | net.c | function parameter |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_recvmsg | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_recvmsg | net.h | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_recv_buf_select | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_recv | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_recv | net.h | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send_zc_cleanup | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send_zc_cleanup | net.h | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send_zc_prep | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send_zc_prep | net.h | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send_zc_import | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send_zc | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_send_zc | net.h | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_sendmsg_zc | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_sendmsg_zc | net.h | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_sendrecv_fail | net.c | local variable, return value |
| io_sr_msg | net.c | file, umsg_compat, umsg, buf | io_sendrecv_fail | net.h | local variable, return value |
| io_recvzc | net.c | file, msg_flags, flags, len, ifq | io_recvzc_prep | net.c | local variable, return value |
| io_recvzc | net.c | file, msg_flags, flags, len, ifq | io_recvzc_prep | zcrx.h | local variable, return value |
| io_recvzc | net.c | file, msg_flags, flags, len, ifq | io_recvzc | net.c | local variable, return value |
| io_recvzc | net.c | file, msg_flags, flags, len, ifq | io_recvzc | zcrx.h | local variable, return value |
| io_recvzc | net.c | file, msg_flags, flags, len, ifq | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_recvzc | net.c | file, msg_flags, flags, len, ifq | io_zcrx_recv | net.c | local variable |
| io_recvzc | net.c | file, msg_flags, flags, len, ifq | io_zcrx_recv | zcrx.c | local variable |
| io_recvzc | net.c | file, msg_flags, flags, len, ifq | io_zcrx_recv | zcrx.h | local variable |
| io_recvmsg_multishot_hdr | net.c | msg, addr | io_recvmsg_prep_multishot | net.c | local variable |
| io_recvmsg_multishot_hdr | net.c | msg, addr | io_recvmsg_multishot | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_ring_ctx_alloc | io_uring.c | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_net_retry | net.c | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_netmsg_iovec_free | net.c | function parameter |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_netmsg_recycle | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_msg_alloc_async | net.c | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_mshot_prep_retry | net.c | function parameter, local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_net_import_vec | net.c | function parameter, local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_compat_msg_copy_hdr | net.c | function parameter |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_copy_msghdr_from_user | net.c | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_msg_copy_hdr | net.c | function parameter |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_sendmsg_recvmsg_cleanup | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_sendmsg_recvmsg_cleanup | net.h | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send_setup | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_sendmsg_setup | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_req_msg_cleanup | net.c | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_bundle_nbufs | net.c | function parameter, local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send_finish | net.c | function parameter |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_sendmsg | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_sendmsg | net.h | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send_select_buffer | net.c | function parameter |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send | net.h | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recvmsg_mshot_prep | net.c | function parameter, local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recvmsg_copy_hdr | net.c | function parameter |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recvmsg_prep_setup | net.c | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recvmsg_prep | net.c | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recvmsg_prep | net.h | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recv_finish | net.c | function parameter, local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recvmsg_prep_multishot | net.c | function parameter, local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recvmsg_multishot | net.c | function parameter |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recvmsg | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recvmsg | net.h | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recv_buf_select | net.c | function parameter |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recv | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_recv | net.h | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send_zc_cleanup | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send_zc_cleanup | net.h | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send_zc_prep | net.c | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send_zc_prep | net.h | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send_zc_import | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send_zc | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_send_zc | net.h | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_sendmsg_zc | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_sendmsg_zc | net.h | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_connect_prep | net.c | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_connect_prep | net.h | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_connect | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_connect | net.h | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_bind_prep | net.c | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_bind_prep | net.h | local variable |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_bind | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_bind | net.h | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_netmsg_cache_free | net.c | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_netmsg_cache_free | net.h | local variable, return value |
| io_async_msghdr | net.h | vec, clear, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, else, endif | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_nop | nop.c | file, result, fd, flags | io_nop_prep | nop.c | local variable, return value |
| io_nop | nop.c | file, result, fd, flags | io_nop_prep | nop.h | local variable, return value |
| io_nop | nop.c | file, result, fd, flags | io_nop | nop.c | local variable, return value |
| io_nop | nop.c | file, result, fd, flags | io_nop | nop.h | local variable, return value |
| io_nop | nop.c | file, result, fd, flags | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | io_send_zc_prep | net.c | local variable, return value |
| io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | io_send_zc_prep | net.h | local variable, return value |
| io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | io_notif_tw_complete | notif.c | local variable, return value |
| io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | io_tx_ubuf_complete | notif.c | local variable, return value |
| io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | io_tx_ubuf_complete | notif.h | local variable, return value |
| io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | io_link_skb | notif.c | local variable, return value |
| io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | io_notif_to_data | net.c | local variable, return value |
| io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | io_notif_to_data | notif.c | local variable, return value |
| io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | io_notif_to_data | notif.h | local variable, return value |
| io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | io_notif_account_mem | net.c | local variable, return value |
| io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | io_notif_account_mem | notif.h | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_prep_async_work | io_uring.c | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_get_sequence | io_uring.c | local variable |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_assign_file | io_uring.c | function parameter, local variable |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | __io_issue_sqe | io_uring.c | function parameter |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_issue_sqe | io_uring.c | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_wq_submit_work | io_uring.c | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_wq_submit_work | io_uring.h | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_init_fail_req | io_uring.c | local variable |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_uring_alloc_async_data | io_uring.h | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_uring_alloc_async_data | net.c | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_uring_alloc_async_data | rw.c | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_uring_alloc_async_data | timeout.c | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_uring_alloc_async_data | uring_cmd.c | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_uring_alloc_async_data | waitid.c | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_arm_poll_handler | io_uring.c | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_arm_poll_handler | poll.c | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | io_arm_poll_handler | poll.h | local variable, return value |
| io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size | __io_import_rw_buffer | rw.c | local variable, return value |
| io_cold_def | opdef.h | name | io_clean_op | io_uring.c | local variable, return value |
| io_cold_def | opdef.h | name | io_req_complete_post | io_uring.c | local variable, return value |
| io_cold_def | opdef.h | name | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_open | openclose.c | file, dfd, file_slot, filename, how, nofile | io_openat_force_async | openclose.c | function parameter |
| io_open | openclose.c | file, dfd, file_slot, filename, how, nofile | __io_openat_prep | openclose.c | local variable, return value |
| io_open | openclose.c | file, dfd, file_slot, filename, how, nofile | io_openat_prep | openclose.c | local variable, return value |
| io_open | openclose.c | file, dfd, file_slot, filename, how, nofile | io_openat_prep | openclose.h | local variable, return value |
| io_open | openclose.c | file, dfd, file_slot, filename, how, nofile | io_openat2_prep | openclose.c | local variable, return value |
| io_open | openclose.c | file, dfd, file_slot, filename, how, nofile | io_openat2_prep | openclose.h | local variable, return value |
| io_open | openclose.c | file, dfd, file_slot, filename, how, nofile | io_openat2 | openclose.c | local variable, return value |
| io_open | openclose.c | file, dfd, file_slot, filename, how, nofile | io_openat2 | openclose.h | local variable, return value |
| io_open | openclose.c | file, dfd, file_slot, filename, how, nofile | io_open_cleanup | openclose.c | local variable, return value |
| io_open | openclose.c | file, dfd, file_slot, filename, how, nofile | io_open_cleanup | openclose.h | local variable, return value |
| io_close | openclose.c | file, fd, file_slot | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_close | openclose.c | file, fd, file_slot | io_close_fixed | openclose.c | local variable, return value |
| io_close | openclose.c | file, fd, file_slot | io_close_prep | openclose.c | local variable, return value |
| io_close | openclose.c | file, fd, file_slot | io_close_prep | openclose.h | local variable, return value |
| io_close | openclose.c | file, fd, file_slot | io_close | openclose.c | local variable, return value |
| io_close | openclose.c | file, fd, file_slot | io_close | openclose.h | local variable, return value |
| io_fixed_install | openclose.c | file, o_flags | io_install_fixed_fd_prep | openclose.c | local variable, return value |
| io_fixed_install | openclose.c | file, o_flags | io_install_fixed_fd_prep | openclose.h | local variable, return value |
| io_fixed_install | openclose.c | file, o_flags | io_install_fixed_fd | openclose.c | local variable, return value |
| io_fixed_install | openclose.c | file, o_flags | io_install_fixed_fd | openclose.h | local variable, return value |
| io_poll_update | poll.c | file, old_user_data, new_user_data, events, update_events, update_user_data | io_poll_remove_prep | poll.c | local variable, return value |
| io_poll_update | poll.c | file, old_user_data, new_user_data, events, update_events, update_user_data | io_poll_remove_prep | poll.h | local variable, return value |
| io_poll_update | poll.c | file, old_user_data, new_user_data, events, update_events, update_user_data | io_poll_remove | poll.c | local variable, return value |
| io_poll_update | poll.c | file, old_user_data, new_user_data, events, update_events, update_user_data | io_poll_remove | poll.h | local variable, return value |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | io_poll_double_prepare | poll.c | local variable |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | __io_queue_proc | poll.c | function parameter |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | io_poll_queue_proc | poll.c | local variable, return value |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | io_poll_can_finish_inline | poll.c | function parameter |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | io_poll_add_hash | poll.c | local variable |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | __io_arm_poll_handler | poll.c | function parameter |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | io_async_queue_proc | poll.c | local variable, return value |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | io_arm_poll_handler | io_uring.c | local variable |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | io_arm_poll_handler | poll.c | local variable |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | io_arm_poll_handler | poll.h | local variable |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | io_poll_add | poll.c | local variable |
| io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask | io_poll_add | poll.h | local variable |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_mark_cancelled | poll.c | local variable |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_get_double | poll.c | local variable |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_get_single | poll.c | local variable |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_req_insert | poll.c | local variable |
| io_poll | poll.h | file, head, events, retries, wait | io_init_poll_iocb | poll.c | function parameter, local variable |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_remove_entry | poll.c | function parameter |
| io_poll | poll.h | file, head, events, retries, wait | if | advise.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | alloc_cache.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | alloc_cache.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | cancel.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | cancel.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | epoll.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | eventfd.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | fdinfo.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | filetable.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | fs.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | futex.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | io-wq.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | io-wq.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | io_uring.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | io_uring.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | kbuf.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | kbuf.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | memmap.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | msg_ring.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | napi.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | napi.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | net.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | nop.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | notif.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | notif.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | opdef.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | openclose.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | poll.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | refs.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | register.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | rsrc.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | rsrc.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | rw.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | slist.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | splice.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | sqpoll.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | statx.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | sync.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | tctx.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | tctx.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | timeout.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | timeout.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | truncate.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | uring_cmd.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | waitid.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | xattr.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | if | zcrx.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_cancel_req | poll.c | local variable |
| io_poll | poll.h | file, head, events, retries, wait | io_pollfree_wake | poll.c | function parameter |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_wake | poll.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_double_prepare | poll.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | __io_queue_proc | poll.c | function parameter, local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_queue_proc | poll.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_can_finish_inline | poll.c | function parameter |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_add_hash | poll.c | local variable |
| io_poll | poll.h | file, head, events, retries, wait | __io_arm_poll_handler | poll.c | function parameter |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_add_prep | poll.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_add_prep | poll.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_add | poll.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_add | poll.h | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_remove | poll.c | local variable, return value |
| io_poll | poll.h | file, head, events, retries, wait | io_poll_remove | poll.h | local variable, return value |
| async_poll | poll.h | poll, double_poll | io_ring_ctx_alloc | io_uring.c | local variable |
| async_poll | poll.h | poll, double_poll | io_queue_next | io_uring.c | local variable, return value |
| async_poll | poll.h | poll, double_poll | io_queue_next | io_uring.h | local variable, return value |
| async_poll | poll.h | poll, double_poll | io_queue_next | timeout.c | local variable, return value |
| async_poll | poll.h | poll, double_poll | io_async_queue_proc | poll.c | local variable, return value |
| async_poll | poll.h | poll, double_poll | io_req_alloc_apoll | poll.c | local variable |
| async_poll | poll.h | poll, double_poll | io_arm_poll_handler | io_uring.c | local variable |
| async_poll | poll.h | poll, double_poll | io_arm_poll_handler | poll.c | local variable |
| async_poll | poll.h | poll, double_poll | io_arm_poll_handler | poll.h | local variable |
| io_ring_ctx_rings | register.c | rings, sq_sqes, sq_region, ring_region | io_register_clock | register.c | local variable |
| io_ring_ctx_rings | register.c | rings, sq_sqes, sq_region, ring_region | io_register_free_rings | register.c | function parameter |
| io_ring_ctx_rings | register.c | rings, sq_sqes, sq_region, ring_region | io_register_resize_rings | register.c | local variable, return value |
| io_rsrc_update | rsrc.c | file, arg, nr_args, offset | io_files_update_prep | rsrc.c | local variable, return value |
| io_rsrc_update | rsrc.c | file, arg, nr_args, offset | io_files_update_prep | rsrc.h | local variable, return value |
| io_rsrc_update | rsrc.c | file, arg, nr_args, offset | io_files_update_with_index_alloc | rsrc.c | local variable, return value |
| io_rsrc_update | rsrc.c | file, arg, nr_args, offset | io_files_update | rsrc.c | local variable, return value |
| io_rsrc_update | rsrc.c | file, arg, nr_args, offset | io_files_update | rsrc.h | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | __io_sync_cancel | cancel.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_free_file_tables | filetable.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_free_file_tables | filetable.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_free_file_tables | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_fixed_fd_remove | filetable.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_fixed_fd_remove | filetable.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_fixed_fd_remove | openclose.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_file_bitmap_set | filetable.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_file_bitmap_set | filetable.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_file_bitmap_set | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_slot_flags | filetable.h | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_slot_flags | io_uring.c | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_slot_file | cancel.c | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_slot_file | fdinfo.c | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_slot_file | filetable.h | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_slot_file | io_uring.c | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_slot_file | msg_ring.c | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_slot_file | rsrc.c | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_slot_file | splice.c | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_fixed_file_set | filetable.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_fixed_file_set | filetable.h | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_fixed_file_set | rsrc.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_file_get_fixed | cancel.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_file_get_fixed | io_uring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_file_get_fixed | io_uring.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_file_get_fixed | nop.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_msg_grab_file | msg_ring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_buffer_unmap | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_node_alloc | filetable.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_node_alloc | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_node_alloc | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_cache_init | io_uring.c | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_cache_init | rsrc.c | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_cache_init | rsrc.h | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_data_alloc | filetable.c | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_data_alloc | rsrc.c | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_data_alloc | rsrc.h | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | __io_sqe_files_update | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | __io_sqe_buffers_update | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_files_update | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_files_update | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_free_rsrc_node | rsrc.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_free_rsrc_node | rsrc.h | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_sqe_files_register | register.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_sqe_files_register | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_sqe_files_register | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | headpage_already_acct | rsrc.c | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | advise.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | alloc_cache.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | alloc_cache.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | cancel.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | cancel.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | epoll.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | eventfd.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | fdinfo.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | filetable.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | fs.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | futex.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | io-wq.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | io-wq.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | io_uring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | io_uring.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | kbuf.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | kbuf.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | memmap.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | msg_ring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | napi.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | napi.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | net.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | nop.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | notif.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | notif.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | opdef.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | openclose.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | poll.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | refs.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | register.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | rw.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | slist.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | splice.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | sqpoll.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | statx.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | sync.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | tctx.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | tctx.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | timeout.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | timeout.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | truncate.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | uring_cmd.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | waitid.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | xattr.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | zcrx.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_sqe_buffer_register | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_sqe_buffers_register | register.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_sqe_buffers_register | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_sqe_buffers_register | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_buffer_unregister_bvec | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | advise.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | alloc_cache.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | alloc_cache.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | cancel.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | cancel.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | epoll.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | eventfd.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | fdinfo.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | filetable.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | fs.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | futex.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | io-wq.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | io-wq.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | io_uring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | io_uring.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | kbuf.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | kbuf.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | memmap.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | msg_ring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | napi.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | napi.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | net.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | nop.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | notif.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | notif.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | opdef.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | openclose.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | poll.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | refs.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | register.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | rw.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | slist.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | splice.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | sqpoll.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | statx.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | sync.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | tctx.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | tctx.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | timeout.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | timeout.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | truncate.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | uring_cmd.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | waitid.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | xattr.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | if | zcrx.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_find_buf_node | nop.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_find_buf_node | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_find_buf_node | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_import_reg_buf | net.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_import_reg_buf | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_import_reg_buf | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_import_reg_buf | rw.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_import_reg_buf | uring_cmd.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_clone_buffers | rsrc.c | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_import_reg_vec | net.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_import_reg_vec | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_import_reg_vec | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_import_reg_vec | rw.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_import_reg_vec | uring_cmd.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_node_lookup | cancel.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_node_lookup | filetable.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_node_lookup | io_uring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_node_lookup | msg_ring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_node_lookup | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_node_lookup | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_rsrc_node_lookup | splice.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_put_rsrc_node | rsrc.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_put_rsrc_node | rsrc.h | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_put_rsrc_node | splice.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_reset_rsrc_node | filetable.c | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_reset_rsrc_node | rsrc.c | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_reset_rsrc_node | rsrc.h | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_req_put_rsrc_nodes | io_uring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_req_put_rsrc_nodes | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_req_assign_rsrc_node | io_uring.c | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_req_assign_rsrc_node | rsrc.h | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_req_assign_buf_node | rsrc.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_req_assign_buf_node | rsrc.h | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf | io_splice_get_file | splice.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_uring_show_fdinfo | fdinfo.c | local variable, return value |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_uring_show_fdinfo | fdinfo.h | local variable, return value |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_release_ubuf | rsrc.c | local variable, return value |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_alloc_imu | rsrc.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_free_imu | rsrc.c | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_buffer_unmap | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_rsrc_cache_init | io_uring.c | local variable, return value |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_rsrc_cache_init | rsrc.c | local variable, return value |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_rsrc_cache_init | rsrc.h | local variable, return value |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | headpage_already_acct | rsrc.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_buffer_account_pin | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_sqe_buffer_register | rsrc.c | local variable, return value |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_sqe_buffers_register | register.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_sqe_buffers_register | rsrc.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_sqe_buffers_register | rsrc.h | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_buffer_unregister_bvec | rsrc.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | validate_fixed_range | rsrc.c | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_import_fixed | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_vec_realloc | rsrc.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_vec_realloc | rsrc.h | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_vec_fill_bvec | rsrc.c | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_estimate_bvec_size | rsrc.c | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_vec_fill_kern_bvec | rsrc.c | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | iov_kern_bvec_size | rsrc.c | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_kern_bvec_size | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_import_reg_vec | net.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_import_reg_vec | rsrc.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_import_reg_vec | rsrc.h | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_import_reg_vec | rw.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, priv, is_kbuf, dir | io_import_reg_vec | uring_cmd.c | local variable |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_region_init_ptr | memmap.c | local variable |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_buffer_account_pin | rsrc.c | local variable |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_coalesce_buffer | rsrc.c | function parameter, local variable |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_check_coalesce_buffer | memmap.c | function parameter |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_check_coalesce_buffer | rsrc.c | function parameter |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_check_coalesce_buffer | rsrc.h | function parameter |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_sqe_buffer_register | rsrc.c | local variable |
| io_rw | rw.c | kiocb, addr, len, flags | io_file_supports_nowait | rw.c | local variable |
| io_rw | rw.c | kiocb, addr, len, flags | io_iov_compat_buffer_select_prep | rw.c | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | io_iov_buffer_select_prep | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | __io_import_rw_buffer | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_meta_restore | rw.c | local variable |
| io_rw | rw.c | kiocb, addr, len, flags | io_prep_rw_pi | rw.c | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | __io_prep_rw | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_init_rw_fixed | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_import_reg_vec | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_prep_reg_vec | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_read_mshot_prep | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_read_mshot_prep | rw.h | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_kiocb_update_pos | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_should_reissue | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_req_end_write | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_req_io_end | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_req_rw_complete | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_req_rw_complete | rw.h | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_complete_rw | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_complete_rw_iopoll | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_done | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | kiocb_done | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_kiocb_ppos | rw.c | local variable |
| io_rw | rw.c | kiocb, addr, len, flags | loop_rw_iter | rw.c | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | io_async_buf_func | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_should_retry | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_iter_do_read | rw.c | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_init_file | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | __io_read | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_read_mshot | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_read_mshot | rw.h | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_write | rw.c | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_write | rw.h | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_uring_classic_poll | rw.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_ring_ctx_alloc | io_uring.c | local variable |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_iov_buffer_select_prep | rw.c | local variable |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_import_vec | rw.c | function parameter, local variable |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | __io_import_rw_buffer | rw.c | function parameter, local variable |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_import_rw_buffer | rw.c | function parameter |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_rw_recycle | rw.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_rw_alloc_async | rw.c | local variable |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_meta_save_state | rw.c | function parameter, local variable |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_meta_restore | rw.c | function parameter |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_prep_rw_pi | rw.c | local variable |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_init_rw_fixed | rw.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_prep_write_fixed | rw.c | local variable |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_prep_write_fixed | rw.h | local variable |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_rw_import_reg_vec | rw.c | function parameter |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_rw_prep_reg_vec | rw.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_rw_should_reissue | rw.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_fixup_rw_res | rw.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_rw_should_retry | rw.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_rw_init_file | rw.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | __io_read | rw.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_write | rw.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_write | rw.h | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_rw_cache_free | rw.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, clear, iter, iter_state, fast_iov, io, with, io, wpq, meta, meta_state | io_rw_cache_free | rw.h | local variable, return value |
| io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | __io_splice_prep | splice.c | local variable, return value |
| io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | io_splice_cleanup | splice.c | local variable, return value |
| io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | io_splice_cleanup | splice.h | local variable, return value |
| io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | io_splice_get_file | splice.c | local variable, return value |
| io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | io_tee | splice.c | local variable, return value |
| io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | io_tee | splice.h | local variable, return value |
| io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | io_splice_prep | splice.c | local variable, return value |
| io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | io_splice_prep | splice.h | local variable, return value |
| io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | io_splice | splice.c | local variable, return value |
| io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | io_splice | splice.h | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_show_fdinfo | fdinfo.c | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_show_fdinfo | fdinfo.h | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_ring_exit_work | io_uring.c | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_ring_exit_work | sqpoll.c | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | tctx_inflight | io_uring.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_cancel_generic | io_uring.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_cancel_generic | io_uring.h | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_cancel_generic | sqpoll.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_should_wake | io_uring.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_should_wake | io_uring.h | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_should_wake | napi.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_unregister_iowq_aff | register.c | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_thread_stop | sqpoll.c | function parameter, local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_thread_stop | sqpoll.h | function parameter, local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_put_sq_data | register.c | function parameter, local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_put_sq_data | sqpoll.c | function parameter, local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_put_sq_data | sqpoll.h | function parameter, local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqd_update_thread_idle | sqpoll.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_thread_finish | io_uring.c | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_thread_finish | sqpoll.c | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_thread_finish | sqpoll.h | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_attach_sq_data | sqpoll.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_get_sq_data | sqpoll.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqd_events_pending | sqpoll.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | __io_sq_thread | sqpoll.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqd_handle_event | sqpoll.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_tw_pending | sqpoll.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_update_worktime | sqpoll.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_thread | sqpoll.c | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_offload_create | io_uring.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_offload_create | sqpoll.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_offload_create | sqpoll.h | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqpoll_wq_cpu_affinity | register.c | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqpoll_wq_cpu_affinity | sqpoll.c | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqpoll_wq_cpu_affinity | sqpoll.h | local variable, return value |
| io_statx | statx.c | file, dfd, mask, flags, filename, buffer | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_statx | statx.c | file, dfd, mask, flags, filename, buffer | io_statx_prep | statx.c | local variable, return value |
| io_statx | statx.c | file, dfd, mask, flags, filename, buffer | io_statx_prep | statx.h | local variable, return value |
| io_statx | statx.c | file, dfd, mask, flags, filename, buffer | io_statx | statx.c | local variable, return value |
| io_statx | statx.c | file, dfd, mask, flags, filename, buffer | io_statx | statx.h | local variable, return value |
| io_statx | statx.c | file, dfd, mask, flags, filename, buffer | io_statx_cleanup | statx.c | local variable, return value |
| io_statx | statx.c | file, dfd, mask, flags, filename, buffer | io_statx_cleanup | statx.h | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_sfr_prep | sync.c | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_sfr_prep | sync.h | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_sync_file_range | sync.c | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_sync_file_range | sync.h | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_fsync_prep | sync.c | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_fsync_prep | sync.h | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_fsync | sync.c | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_fsync | sync.h | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_fallocate_prep | sync.c | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_fallocate_prep | sync.h | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_fallocate | sync.c | local variable, return value |
| io_sync | sync.c | file, len, off, flags, mode | io_fallocate | sync.h | local variable, return value |
| io_tctx_node | tctx.h | ctx_node, task, ctx | __io_async_cancel | cancel.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_ring_exit_work | io_uring.c | local variable, return value |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_ring_exit_work | sqpoll.c | local variable, return value |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_uring_try_cancel_iowq | io_uring.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_uring_try_cancel_iowq | tctx.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_uring_cancel_generic | io_uring.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_uring_cancel_generic | io_uring.h | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_uring_cancel_generic | sqpoll.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_unregister_iowq_aff | register.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | __io_uring_free | io_uring.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | __io_uring_free | tctx.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | __io_uring_add_tctx_node | io_uring.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | __io_uring_add_tctx_node | tctx.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | __io_uring_add_tctx_node | tctx.h | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_uring_del_tctx_node | io_uring.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_uring_del_tctx_node | tctx.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_uring_del_tctx_node | tctx.h | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_uring_clean_tctx | io_uring.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_uring_clean_tctx | tctx.c | local variable |
| io_tctx_node | tctx.h | ctx_node, task, ctx | io_uring_clean_tctx | tctx.h | local variable |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_is_timeout_noseq | timeout.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_put_req | timeout.c | local variable |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_timeout_finish | timeout.c | function parameter |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_timeout_complete | timeout.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_flush_killed_timeouts | timeout.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_flush_timeouts | io_uring.c | local variable |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_flush_timeouts | timeout.c | local variable |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_flush_timeouts | timeout.h | local variable |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | advise.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | alloc_cache.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | alloc_cache.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | cancel.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | cancel.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | epoll.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | eventfd.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | fdinfo.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | filetable.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | fs.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | futex.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | io-wq.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | io-wq.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | io_uring.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | io_uring.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | kbuf.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | kbuf.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | memmap.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | msg_ring.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | napi.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | napi.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | net.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | nop.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | notif.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | notif.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | opdef.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | openclose.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | poll.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | refs.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | register.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | rsrc.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | rsrc.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | rw.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | slist.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | splice.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | sqpoll.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | statx.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | sync.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | tctx.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | tctx.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | timeout.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | timeout.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | truncate.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | uring_cmd.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | waitid.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | xattr.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | if | zcrx.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_timeout_fn | timeout.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_req_task_link_timeout | timeout.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_link_timeout_fn | timeout.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_timeout_get_clock | timeout.c | function parameter, local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | __io_timeout_prep | timeout.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_link_timeout_prep | timeout.c | local variable |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_link_timeout_prep | timeout.h | local variable |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_timeout | timeout.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_timeout | timeout.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_queue_linked_timeout | io_uring.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_queue_linked_timeout | timeout.c | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_queue_linked_timeout | timeout.h | local variable, return value |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_kill_timeouts | io_uring.c | local variable |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_kill_timeouts | timeout.c | local variable |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_kill_timeouts | timeout.h | local variable |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_disarm_linked_timeout | timeout.c | local variable |
| io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | io_disarm_linked_timeout | timeout.h | local variable |
| io_timeout_rem | timeout.c | file, addr, ts, flags, ltimeout | io_timeout_remove_prep | timeout.c | local variable, return value |
| io_timeout_rem | timeout.c | file, addr, ts, flags, ltimeout | io_timeout_remove_prep | timeout.h | local variable, return value |
| io_timeout_rem | timeout.c | file, addr, ts, flags, ltimeout | io_timeout_remove | timeout.c | local variable, return value |
| io_timeout_rem | timeout.c | file, addr, ts, flags, ltimeout | io_timeout_remove | timeout.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_is_timeout_noseq | timeout.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_put_req | timeout.c | local variable |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_timeout_finish | timeout.c | function parameter |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_timeout_complete | timeout.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_flush_killed_timeouts | timeout.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | advise.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | alloc_cache.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | alloc_cache.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | cancel.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | cancel.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | epoll.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | eventfd.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | fdinfo.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | filetable.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | fs.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | futex.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | io-wq.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | io-wq.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | io_uring.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | io_uring.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | kbuf.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | kbuf.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | memmap.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | msg_ring.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | napi.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | napi.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | net.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | nop.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | notif.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | notif.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | opdef.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | openclose.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | poll.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | refs.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | register.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | rsrc.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | rsrc.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | rw.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | slist.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | splice.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | sqpoll.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | statx.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | sync.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | tctx.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | tctx.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | timeout.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | timeout.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | truncate.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | uring_cmd.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | waitid.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | xattr.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | if | zcrx.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_timeout_fn | timeout.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_link_timeout_fn | timeout.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_timeout_get_clock | timeout.c | function parameter, local variable |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | __io_timeout_prep | timeout.c | local variable |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_timeout | timeout.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_timeout | timeout.h | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_queue_linked_timeout | io_uring.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_queue_linked_timeout | timeout.c | local variable, return value |
| io_timeout_data | timeout.h | req, timer, ts, mode, flags | io_queue_linked_timeout | timeout.h | local variable, return value |
| io_ftrunc | truncate.c | file, len | io_ftruncate_prep | truncate.c | local variable, return value |
| io_ftrunc | truncate.c | file, len | io_ftruncate_prep | truncate.h | local variable, return value |
| io_ftrunc | truncate.c | file, len | io_ftruncate | truncate.c | local variable, return value |
| io_ftrunc | truncate.c | file, len | io_ftruncate | truncate.h | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec, sqes | io_ring_ctx_alloc | io_uring.c | local variable |
| io_async_cmd | uring_cmd.h | data, vec, sqes | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec, sqes | io_cmd_cache_free | uring_cmd.c | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec, sqes | io_cmd_cache_free | uring_cmd.h | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec, sqes | io_req_uring_cleanup | uring_cmd.c | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec, sqes | io_uring_cmd_prep_setup | uring_cmd.c | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec, sqes | io_uring_cmd_import_fixed_vec | uring_cmd.c | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec, sqes | io_uring_cmd_import_fixed_vec | uring_cmd.h | local variable, return value |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_waitid_free | waitid.c | local variable |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_waitid_compat_copy_si | waitid.c | function parameter |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_waitid_copy_si | waitid.c | local variable, return value |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_waitid_complete | waitid.c | local variable, return value |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | __io_waitid_cancel | waitid.c | local variable, return value |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_waitid_drop_issue_ref | waitid.c | local variable, return value |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_waitid_cb | waitid.c | local variable, return value |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_waitid_wait | waitid.c | local variable, return value |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_waitid_prep | waitid.c | local variable, return value |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_waitid_prep | waitid.h | local variable, return value |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_waitid | waitid.c | local variable, return value |
| io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | io_waitid | waitid.h | local variable, return value |
| io_waitid_async | waitid.h | req, wo | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_waitid_async | waitid.h | req, wo | io_waitid_free | waitid.c | local variable, return value |
| io_waitid_async | waitid.h | req, wo | __io_waitid_cancel | waitid.c | local variable, return value |
| io_waitid_async | waitid.h | req, wo | io_waitid_drop_issue_ref | waitid.c | local variable, return value |
| io_waitid_async | waitid.h | req, wo | io_waitid_cb | waitid.c | local variable, return value |
| io_waitid_async | waitid.h | req, wo | io_waitid_wait | waitid.c | local variable, return value |
| io_waitid_async | waitid.h | req, wo | io_waitid_prep | waitid.c | local variable |
| io_waitid_async | waitid.h | req, wo | io_waitid_prep | waitid.h | local variable |
| io_waitid_async | waitid.h | req, wo | io_waitid | waitid.c | local variable, return value |
| io_waitid_async | waitid.h | req, wo | io_waitid | waitid.h | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_xattr_cleanup | xattr.c | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_xattr_cleanup | xattr.h | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | __io_getxattr_prep | xattr.c | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_getxattr_prep | xattr.c | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_getxattr_prep | xattr.h | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_fgetxattr | xattr.c | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_fgetxattr | xattr.h | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_getxattr | xattr.c | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_getxattr | xattr.h | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | __io_setxattr_prep | xattr.c | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_setxattr_prep | xattr.c | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_setxattr_prep | xattr.h | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_fsetxattr | xattr.c | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_fsetxattr | xattr.h | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_setxattr | xattr.c | local variable, return value |
| io_xattr | xattr.c | file, ctx, filename | io_setxattr | xattr.h | local variable, return value |
| io_zcrx_args | zcrx.c | req, ifq, sock, nr_skbs | io_zcrx_sync_for_device | zcrx.c | local variable |
| io_zcrx_args | zcrx.c | req, ifq, sock, nr_skbs | io_zcrx_recv_skb | zcrx.c | local variable, return value |
| io_zcrx_args | zcrx.c | req, ifq, sock, nr_skbs | io_zcrx_tcp_recvmsg | zcrx.c | local variable, return value |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | __io_zcrx_unmap_area | zcrx.c | function parameter, local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_unmap_area | zcrx.c | function parameter, local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_map_area | zcrx.c | function parameter |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_sync_for_device | zcrx.c | local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_iov_to_area | zcrx.c | local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_get_user_counter | zcrx.c | local variable, return value |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_iov_page | zcrx.c | local variable, return value |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_free_rbuf_ring | zcrx.c | local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_free_area | zcrx.c | function parameter, local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_create_area | zcrx.c | function parameter, local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_unregister_zcrx_ifqs | io_uring.c | local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_unregister_zcrx_ifqs | zcrx.c | local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_unregister_zcrx_ifqs | zcrx.h | local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | __io_zcrx_get_free_niov | zcrx.c | function parameter |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_return_niov_freelist | zcrx.c | local variable, return value |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_scrub | zcrx.c | local variable, return value |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_ring_refill | zcrx.c | local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_refill_slow | zcrx.c | local variable, return value |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_pp_zc_destroy | zcrx.c | local variable, return value |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_queue_cqe | zcrx.c | local variable |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_alloc_fallback | zcrx.c | function parameter |
| io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist | io_zcrx_copy_chunk | zcrx.c | local variable, return value |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | __io_zcrx_unmap_area | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_unmap_area | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_map_area | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_sync_for_device | zcrx.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_iov_page | zcrx.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_allocate_rbuf_ring | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_free_rbuf_ring | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_free_area | zcrx.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_create_area | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_ifq_alloc | zcrx.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_drop_netdev | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_close_queue | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_ifq_free | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_register_zcrx_ifq | register.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_register_zcrx_ifq | zcrx.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_register_zcrx_ifq | zcrx.h | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_unregister_zcrx_ifqs | io_uring.c | local variable, return value |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_unregister_zcrx_ifqs | zcrx.c | local variable, return value |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_unregister_zcrx_ifqs | zcrx.h | local variable, return value |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_return_niov | zcrx.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_scrub | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_shutdown_zcrx_ifqs | io_uring.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_shutdown_zcrx_ifqs | zcrx.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_shutdown_zcrx_ifqs | zcrx.h | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_rqring_entries | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_get_rqe | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_ring_refill | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_refill_slow | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_pp_zc_alloc_netmems | zcrx.c | local variable, return value |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_pp_zc_init | zcrx.c | local variable, return value |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_pp_zc_destroy | zcrx.c | local variable, return value |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_pp_uninstall | zcrx.c | local variable, return value |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_queue_cqe | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_alloc_fallback | zcrx.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_copy_chunk | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_copy_frag | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_recv_frag | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_recv_skb | zcrx.c | local variable, return value |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_tcp_recvmsg | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_recv | net.c | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_recv | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_recv | zcrx.h | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_shutdown_zcrx_ifqs | io_uring.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_shutdown_zcrx_ifqs | zcrx.c | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_shutdown_zcrx_ifqs | zcrx.h | local variable |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_recv | net.c | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_recv | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock | io_zcrx_recv | zcrx.h | function parameter |
