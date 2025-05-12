| Structure name | Defined in | Attributes | Caller Functions Source | Source Caller | Usage |
|---|---|---|---|---|---|
| io_fadvise | advise.c | offset, len, advice | io_madvise | - | local variable |
| io_fadvise | advise.c | offset, len, advice | io_fadvise_force_async | - | function parameter |
| io_fadvise | advise.c | offset, len, advice | io_fadvise_prep | - | local variable, return value |
| io_fadvise | advise.c | offset, len, advice | io_fadvise | - | local variable, return value |
| io_fadvise | advise.c | offset, len, advice | io_eopnotsupp_prep | - | local variable |
| io_madvise | advise.c | addr, len, advice | io_madvise_prep | - | local variable, return value |
| io_madvise | advise.c | addr, len, advice | io_madvise | - | local variable, return value |
| io_madvise | advise.c | addr, len, advice | io_eopnotsupp_prep | - | local variable |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_cancel_req_match | - | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_async_cancel_one | - | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_try_cancel | - | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_async_cancel_prep | - | local variable, return value |
| io_cancel | cancel.c | addr, flags, fd, opcode | __io_async_cancel | - | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_async_cancel | - | local variable, return value |
| io_cancel | cancel.c | addr, flags, fd, opcode | __io_sync_cancel | - | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_futex_cancel | - | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_futex_cancel | - | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_poll_find | - | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_poll_file_find | - | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | __io_poll_cancel | - | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_poll_cancel | - | function parameter |
| io_cancel | cancel.c | addr, flags, fd, opcode | io_waitid_cancel | - | function parameter |
| io_cancel_data | cancel.h | data | io_cancel_req_match | - | function parameter |
| io_cancel_data | cancel.h | data | io_cancel_cb | - | local variable |
| io_cancel_data | cancel.h | data | io_async_cancel_one | - | function parameter, local variable |
| io_cancel_data | cancel.h | data | io_try_cancel | - | function parameter |
| io_cancel_data | cancel.h | data | io_async_cancel_prep | - | local variable |
| io_cancel_data | cancel.h | data | __io_async_cancel | - | function parameter |
| io_cancel_data | cancel.h | data | io_async_cancel | - | local variable |
| io_cancel_data | cancel.h | data | __io_sync_cancel | - | function parameter, local variable |
| io_cancel_data | cancel.h | data | __io_futex_cancel | - | local variable |
| io_cancel_data | cancel.h | data | io_futex_cancel | - | function parameter |
| io_cancel_data | cancel.h | data | io_futex_cancel | - | function parameter |
| io_cancel_data | cancel.h | data | io_poll_remove_all | - | local variable |
| io_cancel_data | cancel.h | data | io_poll_find | - | function parameter, local variable |
| io_cancel_data | cancel.h | data | io_poll_file_find | - | function parameter |
| io_cancel_data | cancel.h | data | io_poll_disarm | - | local variable |
| io_cancel_data | cancel.h | data | __io_poll_cancel | - | function parameter, local variable |
| io_cancel_data | cancel.h | data | io_poll_cancel | - | function parameter |
| io_cancel_data | cancel.h | data | io_poll_remove | - | local variable |
| io_cancel_data | cancel.h | data | io_poll_multishot_retry | - | local variable |
| io_cancel_data | cancel.h | data | io_timeout_fn | - | local variable |
| io_cancel_data | cancel.h | data | io_req_task_link_timeout | - | local variable |
| io_cancel_data | cancel.h | data | io_timeout_get_clock | - | local variable |
| io_cancel_data | cancel.h | data | io_timeout_remove | - | local variable |
| io_cancel_data | cancel.h | data | io_disarm_linked_timeout | - | local variable |
| io_cancel_data | cancel.h | data | __io_waitid_cancel | - | local variable |
| io_cancel_data | cancel.h | data | io_waitid_cancel | - | function parameter |
| io_epoll | epoll.c | epfd, op, fd, event | io_epoll_ctl_prep | - | local variable, return value |
| io_epoll | epoll.c | epfd, op, fd, event | io_epoll_ctl | - | local variable, return value |
| io_epoll_wait | epoll.c | maxevents | io_epoll_wait_prep | - | local variable, return value |
| io_epoll_wait | epoll.c | maxevents | io_epoll_wait | - | local variable, return value |
| io_epoll_wait | epoll.c | maxevents | io_eopnotsupp_prep | - | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_free | - | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_put | - | function parameter |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_do_signal | - | local variable, return value |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_release | - | function parameter, local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | __io_eventfd_signal | - | function parameter, local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_trigger | - | function parameter, local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_grab | - | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_signal | - | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_flush_signal | - | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_register | - | local variable |
| io_ev_fd | eventfd.c | eventfd_async, last_cq_tail, refs, ops, rcu | io_eventfd_unregister | - | local variable |
| io_rename | fs.c | old_dfd, new_dfd, flags | io_renameat_prep | - | local variable, return value |
| io_rename | fs.c | old_dfd, new_dfd, flags | io_renameat | - | local variable, return value |
| io_rename | fs.c | old_dfd, new_dfd, flags | io_renameat_cleanup | - | local variable, return value |
| io_unlink | fs.c | dfd, flags | io_unlinkat_prep | - | local variable, return value |
| io_unlink | fs.c | dfd, flags | io_unlinkat | - | local variable, return value |
| io_unlink | fs.c | dfd, flags | io_unlinkat_cleanup | - | local variable, return value |
| io_mkdir | fs.c | dfd, mode | io_mkdirat_prep | - | local variable, return value |
| io_mkdir | fs.c | dfd, mode | io_mkdirat | - | local variable, return value |
| io_mkdir | fs.c | dfd, mode | io_mkdirat_cleanup | - | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_symlinkat_prep | - | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_symlinkat | - | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_linkat_prep | - | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_linkat | - | local variable, return value |
| io_link | fs.c | old_dfd, new_dfd, flags | io_link_cleanup | - | local variable, return value |
| io_futex | futex.c |  | io_futexv_complete | - | local variable, return value |
| io_futex | futex.c |  | io_futexv_claim | - | function parameter |
| io_futex | futex.c |  | __io_futex_cancel | - | local variable, return value |
| io_futex | futex.c |  | io_futex_prep | - | local variable, return value |
| io_futex | futex.c |  | io_futex_wakev_fn | - | local variable, return value |
| io_futex | futex.c |  | io_futexv_prep | - | local variable, return value |
| io_futex | futex.c |  | io_futexv_wait | - | local variable, return value |
| io_futex | futex.c |  | io_futex_wait | - | local variable, return value |
| io_futex | futex.c |  | io_futex_wake | - | local variable, return value |
| io_futex_data | futex.c | q | io_futex_cache_init | - | local variable |
| io_futex_data | futex.c | q | __io_futex_cancel | - | local variable |
| io_futex_data | futex.c | q | io_futex_wake_fn | - | local variable, return value |
| io_futex_data | futex.c | q | io_futex_wait | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_get | - | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_release | - | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_work_get_acct | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_get_acct | - | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_stopped | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_cancel_cb | - | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_task_worker_match | - | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_worker_exit | - | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | __io_acct_run_queue | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_create_worker | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_inc_running | - | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | create_worker_cb | - | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_queue_worker_create | - | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_dec_running | - | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | __io_worker_busy | - | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wait_on_hash | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_assign_current_work | - | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_running | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_sleeping | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_init_new_worker | - | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_work_match_all | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_should_retry_thread | - | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | queue_create_worker_retry | - | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | create_worker_cont | - | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_workqueue_create | - | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | create_io_worker | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_wake | - | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_hash_work | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | __io_wq_worker_cancel | - | function parameter, local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_cancel | - | function parameter |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_task_work_match | - | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_cancel_tw_create | - | local variable, return value |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_put_and_exit | - | local variable |
| io_worker | io-wq.c | ref, flags, nulls_node, all_list, lock, ref_done, create_state, create_work, init_retries, rcu, work | io_wq_worker_affinity | - | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_worker_release | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_get_acct | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_work_get_acct | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_worker_cancel_cb | - | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_worker_exit | - | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | __io_acct_run_queue | - | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_create_worker | - | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_inc_running | - | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | create_worker_cb | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_queue_worker_create | - | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_dec_running | - | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | __io_worker_busy | - | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wait_on_hash | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_assign_current_work | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_worker | - | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_worker_sleeping | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_init_new_worker | - | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | create_worker_cont | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_workqueue_create | - | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | create_io_worker | - | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_run_cancel | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_insert_work | - | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_enqueue | - | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_worker_cancel | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_remove_pending | - | function parameter, local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_acct_cancel_pending_work | - | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_cancel_pending_work | - | local variable, return value |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_acct_cancel_running_work | - | function parameter |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_hash_wake | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_create | - | local variable |
| io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags | io_wq_max_workers | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_cancel_cb | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_async_cancel_one | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_worker_release | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_get_acct | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_work_get_acct | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_get_acct | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_worker_ref_put | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_worker_cancel_cb | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_worker_exit | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_acct_run_queue | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_create_worker | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | create_worker_cb | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_queue_worker_create | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_dec_running | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_worker_busy | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_get_work_hash | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wait_on_hash | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_assign_current_work | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_worker | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_worker_sleeping | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_init_new_worker | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_work_match_all | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | create_worker_cont | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_workqueue_create | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | create_io_worker | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_worker_wake | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_run_cancel | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_insert_work | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_work_match_item | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_enqueue | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_hash_work | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_wq_worker_cancel | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_worker_cancel | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_remove_pending | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_acct_cancel_pending_work | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_pending_work | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_acct_cancel_running_work | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_running_work | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_cb | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_hash_wake | - | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_create | - | function parameter, local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_task_work_match | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_exit_start | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cancel_tw_create | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_exit_workers | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_destroy | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_and_exit | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_worker_affinity | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_wq_cpu_online | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cpu_online | - | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cpu_offline | - | local variable, return value |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_cpu_affinity | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_max_workers | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_put_hash | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_is_hashed | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_queue_iowq | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_free_work | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_wq_submit_work | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_cancel_ctx_cb | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_ring_exit_work | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_cancel_task_cb | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_try_cancel_iowq | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_try_cancel_requests | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | if | - | function parameter, local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_cancel_generic | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_unregister_iowq_aff | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_add_after | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_add_tail | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_add_head | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_cut | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __wq_list_splice | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_splice | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_stack_add_head | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_list_del | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_stack_extract | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | wq_next_work | - | function parameter |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_uring_free | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_alloc_task_context | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | __io_uring_add_tctx_node | - | local variable |
| io_wq | io-wq.c | state, worker_refs, worker_done, cpuhp_node, wait, cpu_mask | io_uring_clean_tctx | - | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | create_worker_cont | - | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_enqueue | - | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_hash_work | - | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | __io_wq_worker_cancel | - | function parameter |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_worker_cancel | - | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_remove_pending | - | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_acct_cancel_pending_work | - | function parameter, local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_cancel_pending_work | - | function parameter, local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_acct_cancel_running_work | - | function parameter, local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_cancel_running_work | - | function parameter |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_cancel_cb | - | local variable |
| io_cb_cancel_data | io-wq.c | nr_running, nr_pending, cancel_all | io_wq_destroy | - | local variable |
| online_data | io-wq.c | cpu, online | io_wq_put_and_exit | - | local variable |
| online_data | io-wq.c | cpu, online | io_wq_worker_affinity | - | local variable |
| online_data | io-wq.c | cpu, online | __io_wq_cpu_online | - | local variable |
| io_wq_hash | io-wq.h | refs, map, wait | io_wq_put_hash | - | function parameter, local variable |
| io_wq_hash | io-wq.h | refs, map, wait | io_init_wq_offload | - | local variable |
| io_wq_data | io-wq.h |  | io_wq_hash_wake | - | local variable |
| io_wq_data | io-wq.h |  | io_wq_create | - | function parameter |
| io_wq_data | io-wq.h |  | io_wq_put_hash | - | local variable |
| io_wq_data | io-wq.h |  | io_init_wq_offload | - | local variable |
| io_defer_entry | io_uring.c | list, seq | io_queue_deferred | - | local variable, return value |
| io_defer_entry | io_uring.c | list, seq | io_get_sequence | - | local variable |
| io_defer_entry | io_uring.c | list, seq | io_cancel_defer_files | - | local variable, return value |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_cqring_schedule_timeout | - | local variable |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | __io_cqring_wait_schedule | - | function parameter, local variable |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_cqring_wait_schedule | - | function parameter, local variable |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_cqring_wait | - | function parameter, local variable |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_validate_ext_arg | - | local variable |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | io_get_ext_arg | - | function parameter, local variable |
| ext_arg | io_uring.c | argsz, ts, min_time, ts_set, iowait | if | - | local variable |
| io_tctx_exit | io_uring.c | task_work, completion | io_uring_poll | - | local variable |
| io_tctx_exit | io_uring.c | task_work, completion | io_tctx_exit_cb | - | local variable, return value |
| io_tctx_exit | io_uring.c | task_work, completion | io_ring_exit_work | - | local variable |
| io_task_cancel | io_uring.c | all | io_uring_release | - | local variable |
| io_task_cancel | io_uring.c | all | io_cancel_task_cb | - | local variable |
| io_task_cancel | io_uring.c | all | io_uring_try_cancel_requests | - | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_wake_function | - | local variable, return value |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_timer_wakeup | - | local variable, return value |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_min_timer_wakeup | - | local variable, return value |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_schedule_timeout | - | function parameter, local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | __io_cqring_wait_schedule | - | function parameter, local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_wait_schedule | - | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_cqring_wait | - | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_should_wake | - | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop_should_end | - | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_blocking_busy_loop | - | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_unregister_napi | - | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | __io_napi_busy_loop | - | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi | - | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop | - | function parameter |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_add | - | local variable |
| io_wait_queue | io_uring.h | wq, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll | io_napi_busy_loop | - | function parameter |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_remove_buffers_prep | - | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_remove_buffers | - | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_provide_buffers_prep | - | local variable, return value |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_add_buffers | - | function parameter |
| io_provide_buf | kbuf.c | addr, len, bgid, nbufs, bid | io_provide_buffers | - | local variable, return value |
| io_buffer_list | kbuf.h | buf_list | io_kbuf_inc_commit | - | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_kbuf_commit | - | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffer_get_list | - | local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffer_add_list | - | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_kbuf_recycle_legacy | - | local variable |
| io_buffer_list | kbuf.h | buf_list | io_provided_buffer_select | - | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_provided_buffers_select | - | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_ring_buffer_select | - | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_buffer_select | - | local variable |
| io_buffer_list | kbuf.h | buf_list | io_ring_buffers_peek | - | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_buffers_select | - | local variable |
| io_buffer_list | kbuf.h | buf_list | io_buffers_peek | - | local variable |
| io_buffer_list | kbuf.h | buf_list | __io_put_kbuf_ring | - | local variable |
| io_buffer_list | kbuf.h | buf_list | __io_put_kbufs | - | local variable |
| io_buffer_list | kbuf.h | buf_list | __io_remove_buffers | - | function parameter, local variable |
| io_buffer_list | kbuf.h | buf_list | io_put_bl | - | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_destroy_buffers | - | local variable |
| io_buffer_list | kbuf.h | buf_list | io_destroy_bl | - | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_remove_buffers | - | local variable |
| io_buffer_list | kbuf.h | buf_list | io_provide_buffers_prep | - | local variable |
| io_buffer_list | kbuf.h | buf_list | io_add_buffers | - | function parameter |
| io_buffer_list | kbuf.h | buf_list | io_provide_buffers | - | local variable |
| io_buffer_list | kbuf.h | buf_list | io_register_pbuf_ring | - | local variable |
| io_buffer_list | kbuf.h | buf_list | io_unregister_pbuf_ring | - | local variable |
| io_buffer_list | kbuf.h | buf_list | io_register_pbuf_status | - | local variable |
| io_buffer_list | kbuf.h | buf_list | io_pbuf_get_region | - | local variable |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_kbuf_inc_commit | - | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_kbuf_commit | - | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_buffer_add_list | - | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_kbuf_recycle_legacy | - | local variable |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_provided_buffer_select | - | function parameter, local variable, return value |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_provided_buffers_select | - | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_ring_buffer_select | - | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_ring_buffers_peek | - | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | __io_remove_buffers | - | function parameter, local variable, return value |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_put_bl | - | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_destroy_bl | - | function parameter |
| io_buffer | kbuf.h | list, addr, len, bid, bgid | io_add_buffers | - | function parameter, local variable |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffer_select | - | local variable |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_ring_buffers_peek | - | function parameter |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | if | - | local variable |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffers_select | - | function parameter, local variable |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_buffers_peek | - | function parameter |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_send_select_buffer | - | local variable |
| buf_sel_arg | kbuf.h | out_len, max_len, nr_iovs, mode | io_recv_buf_select | - | local variable |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring_cleanup | - | local variable, return value |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_get_kiocb | - | local variable |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_data_remote | - | function parameter, local variable |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | __io_msg_ring_data | - | function parameter |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring_data | - | local variable, return value |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_grab_file | - | local variable, return value |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_install_complete | - | local variable, return value |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_tw_fd_complete | - | local variable, return value |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_fd_remote | - | local variable, return value |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_send_fd | - | local variable, return value |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | __io_msg_ring_prep | - | function parameter |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring_prep | - | local variable |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_msg_ring | - | local variable, return value |
| io_msg | msg_ring.c | tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | io_uring_sync_msg_ring | - | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | io_napi_hash_find | - | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | __io_napi_add_id | - | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | __io_napi_del_id | - | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | __io_napi_remove_stale | - | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | io_napi_busy_loop_should_end | - | local variable |
| io_napi_entry | napi.c | napi_id, list, timeout, node, rcu | io_napi_free | - | local variable |
| io_shutdown | net.c | how | io_shutdown_prep | - | local variable, return value |
| io_shutdown | net.c | how | io_shutdown | - | local variable, return value |
| io_shutdown | net.c | how | io_eopnotsupp_prep | - | local variable |
| io_accept | net.c | flags, iou_flags, file_slot, nofile | io_accept_prep | - | local variable, return value |
| io_accept | net.c | flags, iou_flags, file_slot, nofile | io_accept | - | local variable, return value |
| io_accept | net.c | flags, iou_flags, file_slot, nofile | io_eopnotsupp_prep | - | local variable |
| io_socket | net.c | domain, type, protocol, flags, file_slot, nofile | io_socket_prep | - | local variable, return value |
| io_socket | net.c | domain, type, protocol, flags, file_slot, nofile | io_socket | - | local variable, return value |
| io_socket | net.c | domain, type, protocol, flags, file_slot, nofile | io_eopnotsupp_prep | - | local variable |
| io_connect | net.c | addr_len, in_progress, seen_econnaborted | io_connect_prep | - | local variable, return value |
| io_connect | net.c | addr_len, in_progress, seen_econnaborted | io_connect | - | local variable, return value |
| io_connect | net.c | addr_len, in_progress, seen_econnaborted | io_eopnotsupp_prep | - | local variable |
| io_bind | net.c | addr_len | io_bind_prep | - | local variable, return value |
| io_bind | net.c | addr_len | io_bind | - | local variable, return value |
| io_bind | net.c | addr_len | io_eopnotsupp_prep | - | local variable |
| io_listen | net.c | backlog | io_listen_prep | - | local variable, return value |
| io_listen | net.c | backlog | io_listen | - | local variable, return value |
| io_listen | net.c | backlog | io_eopnotsupp_prep | - | local variable |
| io_sr_msg | net.c |  | io_mshot_prep_retry | - | local variable, return value |
| io_sr_msg | net.c |  | io_compat_msg_copy_hdr | - | local variable, return value |
| io_sr_msg | net.c |  | io_msg_copy_hdr | - | local variable, return value |
| io_sr_msg | net.c |  | io_send_setup | - | local variable, return value |
| io_sr_msg | net.c |  | io_sendmsg_setup | - | local variable, return value |
| io_sr_msg | net.c |  | io_sendmsg_prep | - | local variable, return value |
| io_sr_msg | net.c |  | io_send_finish | - | local variable, return value |
| io_sr_msg | net.c |  | io_sendmsg | - | local variable, return value |
| io_sr_msg | net.c |  | io_send_select_buffer | - | local variable, return value |
| io_sr_msg | net.c |  | io_send | - | local variable, return value |
| io_sr_msg | net.c |  | io_recvmsg_prep_setup | - | local variable, return value |
| io_sr_msg | net.c |  | io_recvmsg_prep | - | local variable, return value |
| io_sr_msg | net.c |  | io_recv_finish | - | local variable, return value |
| io_sr_msg | net.c |  | io_recvmsg_prep_multishot | - | function parameter, local variable |
| io_sr_msg | net.c |  | io_recvmsg_multishot | - | function parameter |
| io_sr_msg | net.c |  | io_recvmsg | - | local variable, return value |
| io_sr_msg | net.c |  | io_recv_buf_select | - | local variable, return value |
| io_sr_msg | net.c |  | io_recv | - | local variable, return value |
| io_sr_msg | net.c |  | io_send_zc_cleanup | - | local variable, return value |
| io_sr_msg | net.c |  | io_send_zc_prep | - | local variable, return value |
| io_sr_msg | net.c |  | io_send_zc_import | - | local variable, return value |
| io_sr_msg | net.c |  | io_send_zc | - | local variable, return value |
| io_sr_msg | net.c |  | io_sendmsg_zc | - | local variable, return value |
| io_sr_msg | net.c |  | io_sendrecv_fail | - | local variable, return value |
| io_recvzc | net.c | msg_flags, flags, len | io_recvzc_prep | - | local variable, return value |
| io_recvzc | net.c | msg_flags, flags, len | io_recvzc | - | local variable, return value |
| io_recvzc | net.c | msg_flags, flags, len | io_eopnotsupp_prep | - | local variable |
| io_recvzc | net.c | msg_flags, flags, len | io_zcrx_recv | - | local variable |
| io_recvmsg_multishot_hdr | net.c | msg, addr | io_recvmsg_prep_multishot | - | local variable |
| io_recvmsg_multishot_hdr | net.c | msg, addr | io_recvmsg_multishot | - | local variable, return value |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_ring_ctx_alloc | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_net_retry | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_netmsg_iovec_free | - | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_netmsg_recycle | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_msg_alloc_async | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_mshot_prep_retry | - | function parameter, local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_net_import_vec | - | function parameter, local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_compat_msg_copy_hdr | - | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_copy_msghdr_from_user | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_msg_copy_hdr | - | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_sendmsg_recvmsg_cleanup | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_send_setup | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_sendmsg_setup | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_req_msg_cleanup | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_bundle_nbufs | - | function parameter, local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_send_finish | - | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_sendmsg | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_send_select_buffer | - | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_send | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recvmsg_mshot_prep | - | function parameter, local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recvmsg_copy_hdr | - | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recvmsg_prep_setup | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recvmsg_prep | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recv_finish | - | function parameter, local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recvmsg_prep_multishot | - | function parameter, local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recvmsg_multishot | - | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recvmsg | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recv_buf_select | - | function parameter |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_recv | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_send_zc_cleanup | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_send_zc_prep | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_send_zc_import | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_send_zc | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_sendmsg_zc | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_connect_prep | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_connect | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_bind_prep | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_bind | - | local variable |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_netmsg_cache_free | - | local variable, return value |
| io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, msg, addr | io_eopnotsupp_prep | - | local variable, return value |
| io_nop | nop.c | result, fd, flags | io_nop_prep | - | local variable, return value |
| io_nop | nop.c | result, fd, flags | io_nop | - | local variable, return value |
| io_nop | nop.c | result, fd, flags | io_eopnotsupp_prep | - | local variable |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_send_zc_prep | - | local variable, return value |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_notif_tw_complete | - | local variable, return value |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_tx_ubuf_complete | - | local variable, return value |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_link_skb | - | local variable, return value |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_notif_to_data | - | local variable, return value |
| io_notif_data | notif.h | uarg, account_pages, zc_report, zc_used, zc_copied | io_notif_account_mem | - | local variable, return value |
| io_issue_def | opdef.h | async_size | io_prep_async_work | - | local variable |
| io_issue_def | opdef.h | async_size | io_get_sequence | - | local variable |
| io_issue_def | opdef.h | async_size | io_assign_file | - | function parameter, local variable |
| io_issue_def | opdef.h | async_size | __io_issue_sqe | - | function parameter |
| io_issue_def | opdef.h | async_size | io_issue_sqe | - | local variable |
| io_issue_def | opdef.h | async_size | io_wq_submit_work | - | local variable |
| io_issue_def | opdef.h | async_size | io_init_fail_req | - | local variable |
| io_issue_def | opdef.h | async_size | io_uring_alloc_async_data | - | local variable |
| io_issue_def | opdef.h | async_size | io_eopnotsupp_prep | - | local variable |
| io_issue_def | opdef.h | async_size | io_arm_poll_handler | - | local variable |
| io_issue_def | opdef.h | async_size | __io_import_rw_buffer | - | local variable |
| io_cold_def | opdef.h |  | io_clean_op | - | local variable |
| io_cold_def | opdef.h |  | io_req_complete_post | - | local variable |
| io_cold_def | opdef.h |  | io_eopnotsupp_prep | - | local variable |
| io_open | openclose.c | dfd, file_slot, how, nofile | io_openat_force_async | - | function parameter |
| io_open | openclose.c | dfd, file_slot, how, nofile | __io_openat_prep | - | local variable, return value |
| io_open | openclose.c | dfd, file_slot, how, nofile | io_openat_prep | - | local variable, return value |
| io_open | openclose.c | dfd, file_slot, how, nofile | io_openat2_prep | - | local variable, return value |
| io_open | openclose.c | dfd, file_slot, how, nofile | io_openat2 | - | local variable, return value |
| io_open | openclose.c | dfd, file_slot, how, nofile | io_open_cleanup | - | local variable, return value |
| io_close | openclose.c | fd, file_slot | io_eopnotsupp_prep | - | local variable |
| io_close | openclose.c | fd, file_slot | io_close_fixed | - | local variable, return value |
| io_close | openclose.c | fd, file_slot | io_close_prep | - | local variable, return value |
| io_close | openclose.c | fd, file_slot | io_close | - | local variable, return value |
| io_fixed_install | openclose.c | o_flags | io_install_fixed_fd_prep | - | local variable, return value |
| io_fixed_install | openclose.c | o_flags | io_install_fixed_fd | - | local variable, return value |
| io_poll_update | poll.c | old_user_data, new_user_data, events, update_events, update_user_data | io_poll_remove_prep | - | local variable, return value |
| io_poll_update | poll.c | old_user_data, new_user_data, events, update_events, update_user_data | io_poll_remove | - | local variable, return value |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | io_poll_double_prepare | - | local variable |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | __io_queue_proc | - | function parameter |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | io_poll_queue_proc | - | local variable, return value |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | io_poll_can_finish_inline | - | function parameter |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | io_poll_add_hash | - | local variable |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | __io_arm_poll_handler | - | function parameter |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | io_async_queue_proc | - | local variable, return value |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | io_arm_poll_handler | - | local variable |
| io_poll_table | poll.c | pt, nr_entries, error, owning, result_mask | io_poll_add | - | local variable |
| io_poll | poll.h | events, retries, wait | io_poll_mark_cancelled | - | local variable |
| io_poll | poll.h | events, retries, wait | io_poll_get_double | - | local variable |
| io_poll | poll.h | events, retries, wait | io_poll_get_single | - | local variable |
| io_poll | poll.h | events, retries, wait | io_poll_req_insert | - | local variable |
| io_poll | poll.h | events, retries, wait | io_init_poll_iocb | - | function parameter, local variable |
| io_poll | poll.h | events, retries, wait | io_poll_remove_entry | - | function parameter |
| io_poll | poll.h | events, retries, wait | if | - | local variable, return value |
| io_poll | poll.h | events, retries, wait | io_poll_cancel_req | - | local variable |
| io_poll | poll.h | events, retries, wait | io_pollfree_wake | - | function parameter |
| io_poll | poll.h | events, retries, wait | io_poll_wake | - | local variable, return value |
| io_poll | poll.h | events, retries, wait | io_poll_double_prepare | - | local variable, return value |
| io_poll | poll.h | events, retries, wait | __io_queue_proc | - | function parameter, local variable |
| io_poll | poll.h | events, retries, wait | io_poll_queue_proc | - | local variable, return value |
| io_poll | poll.h | events, retries, wait | io_poll_can_finish_inline | - | function parameter |
| io_poll | poll.h | events, retries, wait | io_poll_add_hash | - | local variable |
| io_poll | poll.h | events, retries, wait | __io_arm_poll_handler | - | function parameter |
| io_poll | poll.h | events, retries, wait | io_poll_add_prep | - | local variable, return value |
| io_poll | poll.h | events, retries, wait | io_poll_add | - | local variable, return value |
| io_poll | poll.h | events, retries, wait | io_poll_remove | - | local variable, return value |
| async_poll | poll.h | poll | io_ring_ctx_alloc | - | local variable |
| async_poll | poll.h | poll | io_queue_next | - | local variable |
| async_poll | poll.h | poll | io_async_queue_proc | - | local variable |
| async_poll | poll.h | poll | io_req_alloc_apoll | - | local variable |
| async_poll | poll.h | poll | io_arm_poll_handler | - | local variable |
| io_ring_ctx_rings | register.c | sq_region, ring_region | io_register_clock | - | local variable |
| io_ring_ctx_rings | register.c | sq_region, ring_region | io_register_free_rings | - | function parameter |
| io_ring_ctx_rings | register.c | sq_region, ring_region | io_register_resize_rings | - | local variable |
| io_rsrc_update | rsrc.c | arg, nr_args, offset | io_files_update_prep | - | local variable, return value |
| io_rsrc_update | rsrc.c | arg, nr_args, offset | io_files_update_with_index_alloc | - | local variable, return value |
| io_rsrc_update | rsrc.c | arg, nr_args, offset | io_files_update | - | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | __io_sync_cancel | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_free_file_tables | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_fixed_fd_remove | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_file_bitmap_set | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_slot_flags | - | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_slot_file | - | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_fixed_file_set | - | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_file_get_fixed | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_msg_grab_file | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_buffer_unmap | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_rsrc_node_alloc | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_rsrc_cache_init | - | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_rsrc_data_alloc | - | local variable, return value |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | __io_sqe_files_update | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | __io_sqe_buffers_update | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_files_update | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_free_rsrc_node | - | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_sqe_files_register | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | headpage_already_acct | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | if | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_sqe_buffer_register | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_sqe_buffers_register | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_buffer_unregister_bvec | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | if | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_find_buf_node | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_import_reg_buf | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_clone_buffers | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_import_reg_vec | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_rsrc_node_lookup | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_put_rsrc_node | - | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_reset_rsrc_node | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_req_put_rsrc_nodes | - | local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_req_assign_rsrc_node | - | function parameter, local variable |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_req_assign_buf_node | - | function parameter |
| io_rsrc_node | rsrc.h | type, refs, tag, file_ptr | io_splice_get_file | - | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_uring_show_fdinfo | - | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_release_ubuf | - | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_alloc_imu | - | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_free_imu | - | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_buffer_unmap | - | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_rsrc_cache_init | - | local variable, return value |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | headpage_already_acct | - | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_buffer_account_pin | - | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_sqe_buffer_register | - | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_sqe_buffers_register | - | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_buffer_unregister_bvec | - | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | validate_fixed_range | - | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_import_fixed | - | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_vec_realloc | - | local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_vec_fill_bvec | - | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_estimate_bvec_size | - | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_vec_fill_kern_bvec | - | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | iov_kern_bvec_size | - | function parameter, local variable |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_kern_bvec_size | - | function parameter |
| io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, is_kbuf, dir | io_import_reg_vec | - | local variable |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_region_init_ptr | - | local variable |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_buffer_account_pin | - | local variable |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_coalesce_buffer | - | function parameter, local variable |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_check_coalesce_buffer | - | function parameter |
| io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios | io_sqe_buffer_register | - | local variable |
| io_rw | rw.c | kiocb, addr, len, flags | io_file_supports_nowait | - | local variable |
| io_rw | rw.c | kiocb, addr, len, flags | io_iov_compat_buffer_select_prep | - | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | io_iov_buffer_select_prep | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | __io_import_rw_buffer | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_meta_restore | - | local variable |
| io_rw | rw.c | kiocb, addr, len, flags | io_prep_rw_pi | - | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | __io_prep_rw | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_init_rw_fixed | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_import_reg_vec | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_prep_reg_vec | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_read_mshot_prep | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_kiocb_update_pos | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_should_reissue | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_req_end_write | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_req_io_end | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_req_rw_complete | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_complete_rw | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_complete_rw_iopoll | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_done | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | kiocb_done | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_kiocb_ppos | - | local variable |
| io_rw | rw.c | kiocb, addr, len, flags | loop_rw_iter | - | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | io_async_buf_func | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_should_retry | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_iter_do_read | - | function parameter |
| io_rw | rw.c | kiocb, addr, len, flags | io_rw_init_file | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | __io_read | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_read_mshot | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_write | - | local variable, return value |
| io_rw | rw.c | kiocb, addr, len, flags | io_uring_classic_poll | - | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_ring_ctx_alloc | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_eopnotsupp_prep | - | local variable, return value |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_iov_buffer_select_prep | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_import_vec | - | function parameter, local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | __io_import_rw_buffer | - | function parameter, local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_import_rw_buffer | - | function parameter |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_rw_recycle | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_rw_alloc_async | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_meta_save_state | - | function parameter, local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_meta_restore | - | function parameter |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_prep_rw_pi | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_init_rw_fixed | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_prep_write_fixed | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_rw_import_reg_vec | - | function parameter |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_rw_prep_reg_vec | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_rw_should_reissue | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_fixup_rw_res | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_rw_should_retry | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_rw_init_file | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | __io_read | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_write | - | local variable |
| io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state | io_rw_cache_free | - | local variable, return value |
| io_splice | splice.c | off_out, off_in, len, splice_fd_in, flags | io_eopnotsupp_prep | - | local variable |
| io_splice | splice.c | off_out, off_in, len, splice_fd_in, flags | __io_splice_prep | - | local variable, return value |
| io_splice | splice.c | off_out, off_in, len, splice_fd_in, flags | io_splice_cleanup | - | local variable, return value |
| io_splice | splice.c | off_out, off_in, len, splice_fd_in, flags | io_splice_get_file | - | local variable, return value |
| io_splice | splice.c | off_out, off_in, len, splice_fd_in, flags | io_tee | - | local variable, return value |
| io_splice | splice.c | off_out, off_in, len, splice_fd_in, flags | io_splice_prep | - | local variable, return value |
| io_splice | splice.c | off_out, off_in, len, splice_fd_in, flags | io_splice | - | local variable, return value |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_show_fdinfo | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_ring_exit_work | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | tctx_inflight | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_uring_cancel_generic | - | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_should_wake | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_unregister_iowq_aff | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_thread_stop | - | function parameter, local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_put_sq_data | - | function parameter, local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqd_update_thread_idle | - | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_thread_finish | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_attach_sq_data | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_get_sq_data | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqd_events_pending | - | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | __io_sq_thread | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqd_handle_event | - | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_tw_pending | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_update_worktime | - | function parameter |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_thread | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sq_offload_create | - | local variable |
| io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited | io_sqpoll_wq_cpu_affinity | - | local variable |
| io_statx | statx.c | dfd, mask, flags | io_eopnotsupp_prep | - | local variable |
| io_statx | statx.c | dfd, mask, flags | io_statx_prep | - | local variable, return value |
| io_statx | statx.c | dfd, mask, flags | io_statx | - | local variable, return value |
| io_statx | statx.c | dfd, mask, flags | io_statx_cleanup | - | local variable, return value |
| io_sync | sync.c | len, off, flags, mode | io_sfr_prep | - | local variable, return value |
| io_sync | sync.c | len, off, flags, mode | io_sync_file_range | - | local variable, return value |
| io_sync | sync.c | len, off, flags, mode | io_fsync_prep | - | local variable, return value |
| io_sync | sync.c | len, off, flags, mode | io_fsync | - | local variable, return value |
| io_sync | sync.c | len, off, flags, mode | io_fallocate_prep | - | local variable, return value |
| io_sync | sync.c | len, off, flags, mode | io_fallocate | - | local variable, return value |
| io_tctx_node | tctx.h | ctx_node | __io_async_cancel | - | local variable |
| io_tctx_node | tctx.h | ctx_node | io_ring_exit_work | - | local variable, return value |
| io_tctx_node | tctx.h | ctx_node | io_uring_try_cancel_iowq | - | local variable |
| io_tctx_node | tctx.h | ctx_node | io_uring_cancel_generic | - | local variable |
| io_tctx_node | tctx.h | ctx_node | io_unregister_iowq_aff | - | local variable |
| io_tctx_node | tctx.h | ctx_node | __io_uring_free | - | local variable |
| io_tctx_node | tctx.h | ctx_node | __io_uring_add_tctx_node | - | local variable |
| io_tctx_node | tctx.h | ctx_node | io_uring_del_tctx_node | - | local variable |
| io_tctx_node | tctx.h | ctx_node | io_uring_clean_tctx | - | local variable |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_eopnotsupp_prep | - | local variable |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_is_timeout_noseq | - | local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_put_req | - | local variable |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_timeout_finish | - | function parameter |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_timeout_complete | - | local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_flush_killed_timeouts | - | local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_flush_timeouts | - | local variable |
| io_timeout | timeout.c | off, target_seq, repeats, list | if | - | local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_timeout_fn | - | local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_req_task_link_timeout | - | local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_link_timeout_fn | - | local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_timeout_get_clock | - | function parameter, local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | __io_timeout_prep | - | local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_link_timeout_prep | - | local variable |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_timeout | - | local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_queue_linked_timeout | - | local variable, return value |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_kill_timeouts | - | local variable |
| io_timeout | timeout.c | off, target_seq, repeats, list | io_disarm_linked_timeout | - | local variable |
| io_timeout_rem | timeout.c | addr, ts, flags, ltimeout | io_timeout_remove_prep | - | local variable, return value |
| io_timeout_rem | timeout.c | addr, ts, flags, ltimeout | io_timeout_remove | - | local variable, return value |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_eopnotsupp_prep | - | local variable, return value |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_is_timeout_noseq | - | local variable |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_put_req | - | local variable |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_timeout_finish | - | function parameter |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_timeout_complete | - | local variable |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_flush_killed_timeouts | - | local variable |
| io_timeout_data | timeout.h | timer, ts, mode, flags | if | - | local variable |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_timeout_fn | - | local variable, return value |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_link_timeout_fn | - | local variable, return value |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_timeout_get_clock | - | function parameter, local variable |
| io_timeout_data | timeout.h | timer, ts, mode, flags | __io_timeout_prep | - | local variable |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_timeout | - | local variable |
| io_timeout_data | timeout.h | timer, ts, mode, flags | io_queue_linked_timeout | - | local variable |
| io_ftrunc | truncate.c | len | io_ftruncate_prep | - | local variable, return value |
| io_ftrunc | truncate.c | len | io_ftruncate | - | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec | io_ring_ctx_alloc | - | local variable |
| io_async_cmd | uring_cmd.h | data, vec | io_eopnotsupp_prep | - | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec | io_cmd_cache_free | - | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec | io_req_uring_cleanup | - | local variable |
| io_async_cmd | uring_cmd.h | data, vec | io_uring_cmd_prep_setup | - | local variable, return value |
| io_async_cmd | uring_cmd.h | data, vec | io_uring_cmd_import_fixed_vec | - | local variable |
| io_waitid | waitid.c | which, upid, options, refs, info | io_eopnotsupp_prep | - | local variable |
| io_waitid | waitid.c | which, upid, options, refs, info | io_waitid_free | - | local variable |
| io_waitid | waitid.c | which, upid, options, refs, info | io_waitid_compat_copy_si | - | function parameter |
| io_waitid | waitid.c | which, upid, options, refs, info | io_waitid_copy_si | - | local variable, return value |
| io_waitid | waitid.c | which, upid, options, refs, info | io_waitid_complete | - | local variable, return value |
| io_waitid | waitid.c | which, upid, options, refs, info | __io_waitid_cancel | - | local variable, return value |
| io_waitid | waitid.c | which, upid, options, refs, info | io_waitid_drop_issue_ref | - | local variable, return value |
| io_waitid | waitid.c | which, upid, options, refs, info | io_waitid_cb | - | local variable, return value |
| io_waitid | waitid.c | which, upid, options, refs, info | io_waitid_wait | - | local variable, return value |
| io_waitid | waitid.c | which, upid, options, refs, info | io_waitid_prep | - | local variable, return value |
| io_waitid | waitid.c | which, upid, options, refs, info | io_waitid | - | local variable, return value |
| io_waitid_async | waitid.h | wo | io_eopnotsupp_prep | - | local variable, return value |
| io_waitid_async | waitid.h | wo | io_waitid_free | - | local variable |
| io_waitid_async | waitid.h | wo | __io_waitid_cancel | - | local variable |
| io_waitid_async | waitid.h | wo | io_waitid_drop_issue_ref | - | local variable |
| io_waitid_async | waitid.h | wo | io_waitid_cb | - | local variable |
| io_waitid_async | waitid.h | wo | io_waitid_wait | - | local variable, return value |
| io_waitid_async | waitid.h | wo | io_waitid_prep | - | local variable |
| io_waitid_async | waitid.h | wo | io_waitid | - | local variable |
| io_xattr | xattr.c | ctx | io_xattr_cleanup | - | local variable, return value |
| io_xattr | xattr.c | ctx | __io_getxattr_prep | - | local variable, return value |
| io_xattr | xattr.c | ctx | io_getxattr_prep | - | local variable, return value |
| io_xattr | xattr.c | ctx | io_fgetxattr | - | local variable, return value |
| io_xattr | xattr.c | ctx | io_getxattr | - | local variable, return value |
| io_xattr | xattr.c | ctx | __io_setxattr_prep | - | local variable, return value |
| io_xattr | xattr.c | ctx | io_setxattr_prep | - | local variable, return value |
| io_xattr | xattr.c | ctx | io_fsetxattr | - | local variable, return value |
| io_xattr | xattr.c | ctx | io_setxattr | - | local variable, return value |
| io_zcrx_args | zcrx.c | nr_skbs | io_zcrx_sync_for_device | - | local variable |
| io_zcrx_args | zcrx.c | nr_skbs | io_zcrx_recv_skb | - | local variable |
| io_zcrx_args | zcrx.c | nr_skbs | io_zcrx_tcp_recvmsg | - | local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | __io_zcrx_unmap_area | - | function parameter, local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_unmap_area | - | function parameter, local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_map_area | - | function parameter |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_sync_for_device | - | local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_iov_to_area | - | local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_get_user_counter | - | local variable, return value |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_iov_page | - | local variable, return value |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_free_rbuf_ring | - | local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_free_area | - | function parameter, local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_create_area | - | function parameter, local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_unregister_zcrx_ifqs | - | local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | __io_zcrx_get_free_niov | - | function parameter |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_return_niov_freelist | - | local variable, return value |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_scrub | - | local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_ring_refill | - | local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_refill_slow | - | local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_pp_zc_destroy | - | local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_queue_cqe | - | local variable |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_alloc_fallback | - | function parameter |
| io_zcrx_area | zcrx.h | nia, is_mapped, area_id, ____cacheline_aligned_in_smp, free_count | io_zcrx_copy_chunk | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | __io_zcrx_unmap_area | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_unmap_area | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_map_area | - | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_sync_for_device | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_iov_page | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_allocate_rbuf_ring | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_free_rbuf_ring | - | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_free_area | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_create_area | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_ifq_alloc | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_drop_netdev | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_close_queue | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_ifq_free | - | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_register_zcrx_ifq | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_unregister_zcrx_ifqs | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_return_niov | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_scrub | - | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_shutdown_zcrx_ifqs | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_rqring_entries | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_get_rqe | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_ring_refill | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_refill_slow | - | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_pp_zc_alloc_netmems | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_pp_zc_init | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_pp_zc_destroy | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_pp_uninstall | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_queue_cqe | - | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_alloc_fallback | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_copy_chunk | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_copy_frag | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_recv_frag | - | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_recv_skb | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_tcp_recvmsg | - | function parameter, local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_recv | - | function parameter |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_shutdown_zcrx_ifqs | - | local variable |
| io_zcrx_ifq | zcrx.h | rq_entries, cached_rq_head, rq_lock, if_rxq, netdev_tracker, lock | io_zcrx_recv | - | function parameter |
