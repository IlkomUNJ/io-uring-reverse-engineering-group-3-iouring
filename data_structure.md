| Structure name | Defined in | Attributes | Caller Functions Source | Source Caller | Usage |
|---|---|---|---|---|---|
| io_fadvise | advise.c | offset, len, advice | io_madvise | advise.c | local variable |
| io_fadvise | advise.c | offset, len, advice | io_madvise | advise.h | local variable |
| io_fadvise | advise.c | offset, len, advice | io_fadvise_force_async | advise.c | function parameter |
| io_fadvise | advise.c | offset, len, advice | io_eopnotsupp_prep | opdef.c | local variable |
| io_madvise | advise.c | addr, len, advice | io_madvise_prep | advise.c | local variable, return value |
| io_madvise | advise.c | addr, len, advice | io_madvise_prep | advise.h | local variable, return value |
| io_madvise | advise.c | addr, len, advice | io_eopnotsupp_prep | opdef.c | local variable |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_cancel_req_match | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_cancel_req_match | cancel.h | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_cancel_req_match | poll.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_cancel_req_match | timeout.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_async_cancel_one | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_try_cancel | cancel.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_try_cancel | cancel.h | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_try_cancel | timeout.c | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | __io_async_cancel | cancel.c | function parameter |
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
| io_cancel_data | cancel.h | data | io_async_cancel_one | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | io_try_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | io_try_cancel | cancel.h | function parameter |
| io_cancel_data | cancel.h | data | io_try_cancel | timeout.c | function parameter |
| io_cancel_data | cancel.h | data | __io_async_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | __io_sync_cancel | cancel.c | function parameter |
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
| io_cancel_data | cancel.h | data | io_poll_find | poll.c | function parameter |
| io_cancel_data | cancel.h | data | io_poll_file_find | poll.c | function parameter |
| io_cancel_data | cancel.h | data | __io_poll_cancel | poll.c | function parameter |
| io_cancel_data | cancel.h | data | io_poll_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | io_poll_cancel | poll.c | function parameter |
| io_cancel_data | cancel.h | data | io_poll_cancel | poll.h | function parameter |
| io_cancel_data | cancel.h | data | io_poll_multishot_retry | poll.h | local variable |
| io_cancel_data | cancel.h | data | io_poll_multishot_retry | rw.c | local variable |
| io_cancel_data | cancel.h | data | io_timeout_fn | timeout.c | local variable |
| io_cancel_data | cancel.h | data | io_disarm_linked_timeout | timeout.c | local variable |
| io_cancel_data | cancel.h | data | io_disarm_linked_timeout | timeout.h | local variable |
| io_cancel_data | cancel.h | data | __io_waitid_cancel | waitid.c | local variable |
| io_cancel_data | cancel.h | data | io_waitid_cancel | cancel.c | function parameter |
| io_cancel_data | cancel.h | data | io_waitid_cancel | waitid.c | function parameter |
| io_cancel_data | cancel.h | data | io_waitid_cancel | waitid.h | function parameter |
| io_epoll | epoll.c | epfd, op, fd, event | io_epoll_ctl_prep | epoll.c | local variable, return value |
| io_epoll | epoll.c | epfd, op, fd, event | io_epoll_ctl_prep | epoll.h | local variable, return value |
| io_epoll_wait | epoll.c | maxevents | io_epoll_wait_prep | epoll.c | local variable, return value |
| io_epoll_wait | epoll.c | maxevents | io_epoll_wait_prep | epoll.h | local variable, return value |
| io_epoll_wait | epoll.c | maxevents | io_eopnotsupp_prep | opdef.c | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_free | eventfd.c | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_put | eventfd.c | function parameter |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_release | eventfd.c | function parameter |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | __io_eventfd_signal | eventfd.c | function parameter |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_trigger | eventfd.c | function parameter |
| io_rename | fs.c | old_dfd, new_dfd, flags | io_renameat_prep | fs.c | local variable, return value |
| io_rename | fs.c | old_dfd, new_dfd, flags | io_renameat_prep | fs.h | local variable, return value |
| io_unlink | fs.c | dfd, flags | io_unlinkat_prep | fs.c | local variable, return value |
| io_unlink | fs.c | dfd, flags | io_unlinkat_prep | fs.h | local variable, return value |
| io_mkdir | fs.c | dfd, mode | io_mkdirat_prep | fs.c | local variable, return value |
| io_mkdir | fs.c | dfd, mode | io_mkdirat_prep | fs.h | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_symlinkat_prep | fs.c | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_symlinkat_prep | fs.h | local variable, return value |
| io_futex | futex.c |  | io_futexv_complete | futex.c | local variable, return value |
| io_futex | futex.c |  | io_futexv_claim | futex.c | function parameter |
| io_futex_data | futex.c | q | io_futex_cache_init | futex.c | local variable |
| io_futex_data | futex.c | q | io_futex_cache_init | futex.h | local variable |
| io_futex_data | futex.c | q | io_futex_cache_init | io_uring.c | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_get | io-wq.c | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_release | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_get_acct | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_cancel_cb | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_exit | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_inc_running | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_queue_worker_create | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_dec_running | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | __io_worker_busy | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_assign_current_work | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_init_new_worker | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_should_retry_thread | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | queue_create_worker_retry | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_wake | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | __io_wq_worker_cancel | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_cancel | io-wq.c | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_affinity | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_worker_release | io-wq.c | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | __io_acct_run_queue | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_create_worker | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_queue_worker_create | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | __io_worker_busy | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_init_new_worker | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | create_io_worker | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_insert_work | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_remove_pending | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_acct_cancel_pending_work | io-wq.c | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_acct_cancel_running_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_cancel_cb | cancel.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_worker_release | io-wq.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_get_acct | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_work_get_acct | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_worker_ref_put | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_acct_run_queue | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_create_worker | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_queue_worker_create | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_worker_busy | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_get_work_hash | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wait_on_hash | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_assign_current_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_init_new_worker | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_work_match_all | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | create_io_worker | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_run_cancel | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_insert_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_work_match_item | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_enqueue | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_enqueue | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_enqueue | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_hash_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_hash_work | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_hash_work | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_wq_worker_cancel | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_remove_pending | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_acct_cancel_pending_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_pending_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_acct_cancel_running_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_running_work | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_cb | cancel.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_cb | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_cb | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_cb | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_create | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_create | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_create | tctx.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_exit_start | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_exit_start | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_exit_start | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_tw_create | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_exit_workers | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_destroy | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_and_exit | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_and_exit | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_and_exit | tctx.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_wq_cpu_online | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_max_workers | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_max_workers | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_max_workers | register.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_max_workers | tctx.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_hash | io-wq.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_hash | io-wq.h | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_hash | io_uring.c | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_is_hashed | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_is_hashed | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_is_hashed | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_queue_iowq | io_uring.c | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_free_work | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_free_work | io_uring.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_submit_work | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_submit_work | io_uring.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_cancel_ctx_cb | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_cancel_task_cb | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | advise.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | alloc_cache.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | alloc_cache.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | cancel.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | cancel.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | epoll.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | eventfd.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | fdinfo.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | filetable.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | fs.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | futex.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | io-wq.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | io-wq.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | io_uring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | io_uring.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | kbuf.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | kbuf.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | memmap.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | msg_ring.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | napi.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | napi.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | net.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | nop.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | notif.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | notif.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | opdef.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | openclose.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | poll.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | refs.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | register.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | rsrc.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | rsrc.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | rw.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | slist.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | splice.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | sqpoll.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | statx.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | sync.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | tctx.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | tctx.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | timeout.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | timeout.h | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | truncate.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | uring_cmd.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | waitid.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | xattr.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | zcrx.c | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_unregister_iowq_aff | register.c | local variable |
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
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | create_worker_cont | io-wq.c | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | __io_wq_worker_cancel | io-wq.c | function parameter |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_acct_cancel_pending_work | io-wq.c | function parameter |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_cancel_pending_work | io-wq.c | function parameter |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_acct_cancel_running_work | io-wq.c | function parameter |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_cancel_running_work | io-wq.c | function parameter |
| online_data | io-wq.c | cpu, online | io_wq_put_and_exit | io-wq.c | local variable |
| online_data | io-wq.c | cpu, online | io_wq_put_and_exit | io-wq.h | local variable |
| online_data | io-wq.c | cpu, online | io_wq_put_and_exit | tctx.c | local variable |
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
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_cqring_schedule_timeout | io_uring.c | local variable |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | __io_cqring_wait_schedule | io_uring.c | function parameter |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_cqring_wait_schedule | io_uring.c | function parameter |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_cqring_wait | io_uring.c | function parameter |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_get_ext_arg | io_uring.c | function parameter |
| io_tctx_exit | io_uring.c | task_work, completion | io_uring_poll | io_uring.c | local variable |
| io_task_cancel | io_uring.c | all | io_uring_release | io_uring.c | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_wake_function | io_uring.c | local variable, return value |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_schedule_timeout | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | __io_cqring_wait_schedule | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_wait_schedule | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_should_wake | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_should_wake | io_uring.h | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_should_wake | napi.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop_should_end | napi.c | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_blocking_busy_loop | napi.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | __io_napi_busy_loop | napi.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | __io_napi_busy_loop | napi.h | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi | napi.h | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi | sqpoll.c | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop | napi.h | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop | io_uring.c | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop | napi.h | function parameter |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_remove_buffers_prep | kbuf.c | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_remove_buffers_prep | kbuf.h | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_add_buffers | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_kbuf_inc_commit | kbuf.c | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_kbuf_commit | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_kbuf_commit | kbuf.h | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_buffer_add_list | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_provided_buffer_select | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_provided_buffers_select | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_ring_buffer_select | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_ring_buffers_peek | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | __io_remove_buffers | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_put_bl | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_destroy_bl | kbuf.c | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_add_buffers | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_kbuf_inc_commit | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_kbuf_commit | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_kbuf_commit | kbuf.h | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_buffer_add_list | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_provided_buffer_select | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_provided_buffers_select | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_ring_buffer_select | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_ring_buffers_peek | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | __io_remove_buffers | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_put_bl | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_destroy_bl | kbuf.c | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_add_buffers | kbuf.c | function parameter |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffer_select | kbuf.c | local variable |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffer_select | kbuf.h | local variable |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffer_select | net.c | local variable |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffer_select | rw.c | local variable |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_ring_buffers_peek | kbuf.c | function parameter |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffers_select | kbuf.c | function parameter |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffers_select | kbuf.h | function parameter |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffers_select | net.c | function parameter |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffers_peek | kbuf.c | function parameter |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffers_peek | kbuf.h | function parameter |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffers_peek | net.c | function parameter |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_send_select_buffer | net.c | local variable |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring_cleanup | msg_ring.c | local variable, return value |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring_cleanup | msg_ring.h | local variable, return value |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_data_remote | msg_ring.c | function parameter |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | __io_msg_ring_data | msg_ring.c | function parameter |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | __io_msg_ring_prep | msg_ring.c | function parameter |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | io_napi_hash_find | napi.c | local variable |
| io_shutdown | net.c | how | io_shutdown_prep | net.c | local variable, return value |
| io_shutdown | net.c | how | io_shutdown_prep | net.h | local variable, return value |
| io_shutdown | net.c | how | io_eopnotsupp_prep | opdef.c | local variable |
| io_accept | net.c | flags, iou_flags, file_slot, nofile | io_accept_prep | net.c | local variable, return value |
| io_accept | net.c | flags, iou_flags, file_slot, nofile | io_accept_prep | net.h | local variable, return value |
| io_accept | net.c | flags, iou_flags, file_slot, nofile | io_eopnotsupp_prep | opdef.c | local variable |
| io_socket | net.c | domain, type, protocol, flags, file_slot, nofile | io_socket_prep | net.c | local variable, return value |
| io_socket | net.c | domain, type, protocol, flags, file_slot, nofile | io_socket_prep | net.h | local variable, return value |
| io_socket | net.c | domain, type, protocol, flags, file_slot, nofile | io_eopnotsupp_prep | opdef.c | local variable |
| io_connect | net.c | addr_len, in_progress, seen_econnaborted | io_connect_prep | net.c | local variable, return value |
| io_connect | net.c | addr_len, in_progress, seen_econnaborted | io_connect_prep | net.h | local variable, return value |
| io_connect | net.c | addr_len, in_progress, seen_econnaborted | io_eopnotsupp_prep | opdef.c | local variable |
| io_bind | net.c | addr_len | io_bind_prep | net.c | local variable, return value |
| io_bind | net.c | addr_len | io_bind_prep | net.h | local variable, return value |
| io_bind | net.c | addr_len | io_eopnotsupp_prep | opdef.c | local variable |
| io_listen | net.c | backlog | io_listen_prep | net.c | local variable, return value |
| io_listen | net.c | backlog | io_listen_prep | net.h | local variable, return value |
| io_listen | net.c | backlog | io_eopnotsupp_prep | opdef.c | local variable |
| io_sr_msg | net.c |  | io_mshot_prep_retry | net.c | local variable, return value |
| io_sr_msg | net.c |  | io_recvmsg_prep_multishot | net.c | function parameter |
| io_sr_msg | net.c |  | io_recvmsg_multishot | net.c | function parameter |
| io_recvzc | net.c | msg_flags, flags, len | io_recvzc_prep | net.c | local variable, return value |
| io_recvzc | net.c | msg_flags, flags, len | io_recvzc_prep | zcrx.h | local variable, return value |
| io_recvzc | net.c | msg_flags, flags, len | io_eopnotsupp_prep | opdef.c | local variable |
| io_recvzc | net.c | msg_flags, flags, len | io_zcrx_recv | net.c | local variable |
| io_recvzc | net.c | msg_flags, flags, len | io_zcrx_recv | zcrx.c | local variable |
| io_recvzc | net.c | msg_flags, flags, len | io_zcrx_recv | zcrx.h | local variable |
| io_recvmsg_multishot_hdr | net.c | msg, addr | io_recvmsg_prep_multishot | net.c | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_ring_ctx_alloc | io_uring.c | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_net_retry | net.c | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_netmsg_iovec_free | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_mshot_prep_retry | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_net_import_vec | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_compat_msg_copy_hdr | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_msg_copy_hdr | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_bundle_nbufs | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_send_finish | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_send_select_buffer | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recvmsg_mshot_prep | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recvmsg_copy_hdr | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recv_finish | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recvmsg_prep_multishot | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recvmsg_multishot | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recv_buf_select | net.c | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_nop | nop.c | result, fd, flags | io_nop_prep | nop.c | local variable, return value |
| io_nop | nop.c | result, fd, flags | io_nop_prep | nop.h | local variable, return value |
| io_nop | nop.c | result, fd, flags | io_eopnotsupp_prep | opdef.c | local variable |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_send_zc_prep | net.c | local variable, return value |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_send_zc_prep | net.h | local variable, return value |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_notif_tw_complete | notif.c | local variable, return value |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_notif_to_data | net.c | local variable, return value |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_notif_to_data | notif.c | local variable, return value |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_notif_to_data | notif.h | local variable, return value |
| io_issue_def | opdef.h | async_size | io_prep_async_work | io_uring.c | local variable |
| io_issue_def | opdef.h | async_size | io_assign_file | io_uring.c | function parameter |
| io_issue_def | opdef.h | async_size | __io_issue_sqe | io_uring.c | function parameter |
| io_issue_def | opdef.h | async_size | io_uring_alloc_async_data | io_uring.h | local variable |
| io_issue_def | opdef.h | async_size | io_uring_alloc_async_data | net.c | local variable |
| io_issue_def | opdef.h | async_size | io_uring_alloc_async_data | rw.c | local variable |
| io_issue_def | opdef.h | async_size | io_uring_alloc_async_data | timeout.c | local variable |
| io_issue_def | opdef.h | async_size | io_uring_alloc_async_data | uring_cmd.c | local variable |
| io_issue_def | opdef.h | async_size | io_uring_alloc_async_data | waitid.c | local variable |
| io_issue_def | opdef.h | async_size | io_eopnotsupp_prep | opdef.c | local variable |
| io_issue_def | opdef.h | async_size | io_arm_poll_handler | io_uring.c | local variable |
| io_issue_def | opdef.h | async_size | io_arm_poll_handler | poll.c | local variable |
| io_issue_def | opdef.h | async_size | io_arm_poll_handler | poll.h | local variable |
| io_issue_def | opdef.h | async_size | __io_import_rw_buffer | rw.c | local variable |
| io_cold_def | opdef.h |  | io_clean_op | io_uring.c | local variable |
| io_cold_def | opdef.h |  | io_eopnotsupp_prep | opdef.c | local variable |
| io_open | openclose.c | dfd, file_slot, how, nofile | io_openat_force_async | openclose.c | function parameter |
| io_close | openclose.c | fd, file_slot | io_eopnotsupp_prep | opdef.c | local variable |
| io_close | openclose.c | fd, file_slot | io_close_fixed | openclose.c | local variable, return value |
| io_fixed_install | openclose.c | o_flags | io_install_fixed_fd_prep | openclose.c | local variable, return value |
| io_fixed_install | openclose.c | o_flags | io_install_fixed_fd_prep | openclose.h | local variable, return value |
| io_poll_update | poll.c | old_user_data, new_user_data, events, update_events, update_user_data | io_poll_remove_prep | poll.c | local variable, return value |
| io_poll_update | poll.c | old_user_data, new_user_data, events, update_events, update_user_data | io_poll_remove_prep | poll.h | local variable, return value |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | io_poll_double_prepare | poll.c | local variable |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | __io_queue_proc | poll.c | function parameter |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | io_poll_can_finish_inline | poll.c | function parameter |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | __io_arm_poll_handler | poll.c | function parameter |
| io_poll | poll.h | events, retries, wait | io_poll_mark_cancelled | poll.c | local variable |
| io_poll | poll.h | events, retries, wait | io_init_poll_iocb | poll.c | function parameter |
| io_poll | poll.h | events, retries, wait | io_poll_remove_entry | poll.c | function parameter |
| io_poll | poll.h | events, retries, wait | io_pollfree_wake | poll.c | function parameter |
| io_poll | poll.h | events, retries, wait | __io_queue_proc | poll.c | function parameter |
| io_poll | poll.h | events, retries, wait | io_poll_can_finish_inline | poll.c | function parameter |
| io_poll | poll.h | events, retries, wait | __io_arm_poll_handler | poll.c | function parameter |
| async_poll | poll.h | poll | io_ring_ctx_alloc | io_uring.c | local variable |
| async_poll | poll.h | poll | io_async_queue_proc | poll.c | local variable |
| io_ring_ctx_rings | register.c | sq_region, ring_region | io_register_clock | register.c | local variable |
| io_ring_ctx_rings | register.c | sq_region, ring_region | io_register_free_rings | register.c | function parameter |
| io_rsrc_update | rsrc.c | arg, nr_args, offset | io_files_update_prep | rsrc.c | local variable, return value |
| io_rsrc_update | rsrc.c | arg, nr_args, offset | io_files_update_prep | rsrc.h | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | __io_sync_cancel | cancel.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_free_file_tables | filetable.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_free_file_tables | filetable.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_free_file_tables | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_file_bitmap_set | filetable.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_file_bitmap_set | filetable.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_file_bitmap_set | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_slot_flags | filetable.h | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_slot_flags | io_uring.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_slot_file | cancel.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_slot_file | fdinfo.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_slot_file | filetable.h | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_slot_file | io_uring.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_slot_file | msg_ring.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_slot_file | rsrc.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_slot_file | splice.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_fixed_file_set | filetable.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_fixed_file_set | filetable.h | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_fixed_file_set | rsrc.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_file_get_fixed | cancel.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_file_get_fixed | io_uring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_file_get_fixed | io_uring.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_file_get_fixed | nop.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_msg_grab_file | msg_ring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_buffer_unmap | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_free_rsrc_node | rsrc.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_free_rsrc_node | rsrc.h | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_rsrc_node_lookup | cancel.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_rsrc_node_lookup | filetable.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_rsrc_node_lookup | io_uring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_rsrc_node_lookup | msg_ring.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_rsrc_node_lookup | rsrc.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_rsrc_node_lookup | rsrc.h | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_rsrc_node_lookup | splice.c | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_put_rsrc_node | rsrc.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_put_rsrc_node | rsrc.h | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_put_rsrc_node | splice.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_req_assign_rsrc_node | io_uring.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_req_assign_rsrc_node | rsrc.h | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_req_assign_buf_node | rsrc.c | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_req_assign_buf_node | rsrc.h | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_splice_get_file | splice.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_uring_show_fdinfo | fdinfo.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_uring_show_fdinfo | fdinfo.h | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_release_ubuf | rsrc.c | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_free_imu | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_buffer_unmap | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_buffer_account_pin | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | validate_fixed_range | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_import_fixed | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_vec_fill_bvec | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_estimate_bvec_size | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_vec_fill_kern_bvec | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | iov_kern_bvec_size | rsrc.c | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_kern_bvec_size | rsrc.c | function parameter |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_region_init_ptr | memmap.c | local variable |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_buffer_account_pin | rsrc.c | local variable |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_coalesce_buffer | rsrc.c | function parameter |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_check_coalesce_buffer | memmap.c | function parameter |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_check_coalesce_buffer | rsrc.c | function parameter |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_check_coalesce_buffer | rsrc.h | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | io_file_supports_nowait | rw.c | local variable |
| io_rw | rw.c | kiocb, addr, len, flags | io_iov_compat_buffer_select_prep | rw.c | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | io_prep_rw_pi | rw.c | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | loop_rw_iter | rw.c | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | io_iter_do_read | rw.c | function parameter |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_ring_ctx_alloc | io_uring.c | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_iov_buffer_select_prep | rw.c | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_import_vec | rw.c | function parameter |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | __io_import_rw_buffer | rw.c | function parameter |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_import_rw_buffer | rw.c | function parameter |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_meta_save_state | rw.c | function parameter |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_meta_restore | rw.c | function parameter |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_rw_import_reg_vec | rw.c | function parameter |
| io_splice | splice.c | off_out, off_in, len, splice_fd_in, flags | io_eopnotsupp_prep | opdef.c | local variable |
| io_splice | splice.c | off_out, off_in, len, splice_fd_in, flags | __io_splice_prep | splice.c | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_show_fdinfo | fdinfo.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_show_fdinfo | fdinfo.h | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_ring_exit_work | io_uring.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_ring_exit_work | sqpoll.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_cancel_generic | io_uring.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_cancel_generic | io_uring.h | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_cancel_generic | sqpoll.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_should_wake | io_uring.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_should_wake | io_uring.h | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_should_wake | napi.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_unregister_iowq_aff | register.c | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_thread_stop | sqpoll.c | function parameter, local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_thread_stop | sqpoll.h | function parameter, local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_put_sq_data | register.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_put_sq_data | sqpoll.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_put_sq_data | sqpoll.h | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqd_update_thread_idle | sqpoll.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqd_events_pending | sqpoll.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqd_handle_event | sqpoll.c | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_update_worktime | sqpoll.c | function parameter |
| io_statx | statx.c | dfd, mask, flags | io_eopnotsupp_prep | opdef.c | local variable |
| io_statx | statx.c | dfd, mask, flags | io_statx_prep | statx.c | local variable, return value |
| io_statx | statx.c | dfd, mask, flags | io_statx_prep | statx.h | local variable, return value |
| io_sync | sync.c | len, off, flags, mode | io_sfr_prep | sync.c | local variable, return value |
| io_sync | sync.c | len, off, flags, mode | io_sfr_prep | sync.h | local variable, return value |
| io_tctx_node | tctx.h | ctx_node | __io_async_cancel | cancel.c | local variable |
| io_tctx_node | tctx.h | ctx_node | io_ring_exit_work | io_uring.c | local variable, return value |
| io_tctx_node | tctx.h | ctx_node | io_ring_exit_work | sqpoll.c | local variable, return value |
| io_tctx_node | tctx.h | ctx_node | io_unregister_iowq_aff | register.c | local variable |
| io_tctx_node | tctx.h | ctx_node | __io_uring_free | io_uring.c | local variable |
| io_tctx_node | tctx.h | ctx_node | __io_uring_free | tctx.c | local variable |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_eopnotsupp_prep | opdef.c | local variable |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_is_timeout_noseq | timeout.c | local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_timeout_finish | timeout.c | function parameter |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_timeout_get_clock | timeout.c | function parameter |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_disarm_linked_timeout | timeout.c | local variable |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_disarm_linked_timeout | timeout.h | local variable |
| io_timeout_rem | timeout.c | addr, ts, flags, ltimeout | io_timeout_remove_prep | timeout.c | local variable, return value |
| io_timeout_rem | timeout.c | addr, ts, flags, ltimeout | io_timeout_remove_prep | timeout.h | local variable, return value |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_is_timeout_noseq | timeout.c | local variable |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_timeout_finish | timeout.c | function parameter |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_timeout_get_clock | timeout.c | function parameter |
| io_ftrunc | truncate.c | len | io_ftruncate_prep | truncate.c | local variable, return value |
| io_ftrunc | truncate.c | len | io_ftruncate_prep | truncate.h | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec | io_ring_ctx_alloc | io_uring.c | local variable |
| io_async_cmd | uring_cmd.h | data, vec | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec | io_cmd_cache_free | uring_cmd.c | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec | io_cmd_cache_free | uring_cmd.h | local variable, return value |
| io_waitid | waitid.c | which, upid, options, refs, info | io_eopnotsupp_prep | opdef.c | local variable |
| io_waitid | waitid.c | which, upid, options, refs, info | io_waitid_free | waitid.c | local variable |
| io_waitid | waitid.c | which, upid, options, refs, info | io_waitid_compat_copy_si | waitid.c | function parameter |
| io_waitid_async | waitid.h | wo | io_eopnotsupp_prep | opdef.c | local variable, return value |
| io_waitid_async | waitid.h | wo | io_waitid_free | waitid.c | local variable |
| io_xattr | xattr.c | ctx | io_xattr_cleanup | xattr.c | local variable, return value |
| io_xattr | xattr.c | ctx | io_xattr_cleanup | xattr.h | local variable, return value |
| io_zcrx_args | zcrx.c | nr_skbs | io_zcrx_sync_for_device | zcrx.c | local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | __io_zcrx_unmap_area | zcrx.c | function parameter, local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_unmap_area | zcrx.c | function parameter |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_map_area | zcrx.c | function parameter |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_free_area | zcrx.c | function parameter |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_create_area | zcrx.c | function parameter |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | __io_zcrx_get_free_niov | zcrx.c | function parameter |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_alloc_fallback | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | __io_zcrx_unmap_area | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_unmap_area | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_map_area | zcrx.c | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_allocate_rbuf_ring | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_free_rbuf_ring | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_create_area | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_drop_netdev | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_close_queue | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_ifq_free | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_scrub | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_rqring_entries | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_get_rqe | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_ring_refill | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_refill_slow | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_queue_cqe | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_copy_chunk | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_copy_frag | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_recv_frag | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_tcp_recvmsg | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_recv | net.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_recv | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_recv | zcrx.h | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_shutdown_zcrx_ifqs | io_uring.c | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_shutdown_zcrx_ifqs | zcrx.c | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_shutdown_zcrx_ifqs | zcrx.h | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_recv | net.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_recv | zcrx.c | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_recv | zcrx.h | function parameter |
