# Task 3: Data Structure Investigation

The objective of this task is to document all internal data structures defined in io_uring.

Structure name | Defined in | Attributes | Caller Functions Source | source caller | usage
---------------|------------|------------|-------------------------|---------------|-------------------
io_poll | poll.h | file, head, events, retries, wait |  |  | io_poll
async_poll | poll.h | poll, double_poll |  |  | async_poll
io_msg | msg_ring.c | file, src_file, tw, user_data, len, cmd, src_fd, dst_fd, cqe_flags | define | define | io_msg
io_futex | futex.c | file, uaddr, uwaitv | bool | bool | io_futex
io_futex_data | futex.c | q, req | bool | bool | io_futex_data
io_statx | statx.c | file, dfd, mask, flags, filename, buffer | int | int | io_statx
io_epoll | epoll.c | file, epfd, op, fd, event | int | int | io_epoll
io_epoll_wait | epoll.c | file, maxevents, events | int | int | io_epoll_wait
io_napi_entry | napi.c | napi_id, list, timeout, node, rcu |  |  | io_napi_entry
io_rsrc_update | rsrc.c | file, arg, nr_args, offset | define | define | io_rsrc_update
io_worker | io-wq.c | ref, flags, nulls_node, all_list, task, wq, acct, cur_work, lock, ref_done, create_state, create_work, init_retries, rcu, work |  |  | io_worker
io_wq_acct | io-wq.c | workers_lock, nr_workers, max_workers, nr_running, free_list, all_list, lock, work_list, flags |  |  | io_wq_acct
io_wq | io-wq.c | state, free_work, do_work, hash, worker_refs, worker_done, cpuhp_node, task, acct[IO_WQ_ACCT_NR], wait, hash_tail[IO_WQ_NR_HASH_BUCKETS], cpu_mask | define | define | io_wq
io_cb_cancel_data | io-wq.c | fn, data, nr_running, nr_pending, cancel_all |  |  | io_cb_cancel_data
online_data | io-wq.c | cpu, online |  |  | online_data
io_poll_update | poll.c | file, old_user_data, new_user_data, events, update_events, update_user_data | IO_POLL_CANCEL_FLAG | IO_POLL_CANCEL_FLAG | io_poll_update
io_poll_table | poll.c | pt, req, nr_entries, error, owning, result_mask |  |  | io_poll_table
io_tctx_node | tctx.h | ctx_node, task, ctx |  |  | io_tctx_node
io_async_msghdr | net.h | vec, namelen, fast_iov, controllen, payloadlen, uaddr, msg, addr, ), struct_group(clear), #endif |  |  | io_async_msghdr
io_shutdown | net.c | file, how | if | if | io_shutdown
io_accept | net.c | file, addr, addr_len, flags, iou_flags, file_slot, nofile | if | if | io_accept
io_socket | net.c | file, domain, type, protocol, flags, file_slot, nofile | if | if | io_socket
io_connect | net.c | file, addr, addr_len, in_progress, seen_econnaborted | if | if | io_connect
io_bind | net.c | file, addr_len | if | if | io_bind
io_listen | net.c | file, backlog | if | if | io_listen
io_sr_msg | net.c | file, umsg_compat, umsg, buf | if | if | io_sr_msg
io_recvzc | net.c | file, msg_flags, flags, len, ifq | if | if | io_recvzc
io_recvmsg_multishot_hdr | net.c | msg, addr |  |  | io_recvmsg_multishot_hdr
io_ev_fd | eventfd.c | cq_ev_fd, eventfd_async, last_cq_tail, refs, ops, rcu | void | void | io_ev_fd
io_timeout | timeout.c | file, off, target_seq, repeats, list, head, prev | bool | bool | io_timeout
io_timeout_rem | timeout.c | file, addr, ts, flags, ltimeout | bool | bool | io_timeout_rem
io_fadvise | advise.c | file, offset, len, advice | int | int | io_fadvise
io_madvise | advise.c | file, addr, len, advice | int | int | io_madvise
io_provide_buf | kbuf.c | file, addr, len, bgid, nbufs, bid | define | define | io_provide_buf
io_splice | splice.c | file_out, off_out, off_in, len, splice_fd_in, flags, rsrc_node | int | int | io_splice
io_async_cmd | uring_cmd.h | data, vec, sqes[2] |  |  | io_async_cmd
io_issue_def | opdef.h | 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, async_size, int), ) |  |  | io_issue_def
io_cold_def | opdef.h | name, ), ) |  |  | io_cold_def
io_meta_state | rw.h | seed, iter_meta |  |  | io_meta_state
io_async_rw | rw.h | vec, bytes_done, iter, iter_state, fast_iov, wpq, meta, meta_state |  |  | io_async_rw
io_wait_queue | io_uring.h | wq, ctx, cq_tail, cq_min_tail, nr_timeouts, hit_timeout, min_timeout, timeout, t, napi_busy_poll_dt, napi_prefer_busy_poll, #endif |  |  | io_wait_queue
io_wq_hash | io-wq.h | refs, map, wait |  |  | io_wq_hash
io_wq_data | io-wq.h | hash, task, do_work, free_work |  |  | io_wq_data
io_buffer_list | kbuf.h | buf_list, buf_ring |  |  | io_buffer_list
io_buffer | kbuf.h | list, addr, len, bid, bgid |  |  | io_buffer
buf_sel_arg | kbuf.h | iovs, out_len, max_len, nr_iovs, mode |  |  | buf_sel_arg
io_zcrx_area | zcrx.h | nia, ifq, user_refs, is_mapped, area_id, pages, ____cacheline_aligned_in_smp, free_count, freelist |  |  | io_zcrx_area
io_zcrx_ifq | zcrx.h | ctx, area, rq_ring, rqes, rq_entries, cached_rq_head, rq_lock, if_rxq, dev, netdev, netdev_tracker, lock |  |  | io_zcrx_ifq
io_cancel | cancel.c | file, addr, flags, fd, opcode | define | define | io_cancel
io_sync | sync.c | file, len, off, flags, mode | int | int | io_sync
io_rename | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | int | int | io_rename
io_unlink | fs.c | file, dfd, flags, filename | int | int | io_unlink
io_mkdir | fs.c | file, dfd, mode, filename | int | int | io_mkdir
io_link | fs.c | file, old_dfd, new_dfd, oldpath, newpath, flags | int | int | io_link
io_ftrunc | truncate.c | file, len | int | int | io_ftrunc
io_rw | rw.c | kiocb, addr, len, flags | void | void | io_rw
io_zcrx_args | zcrx.c | req, ifq, sock, nr_skbs |  |  | io_zcrx_args
io_ring_ctx_rings | register.c | rings, sq_sqes, sq_region, ring_region |  |  | io_ring_ctx_rings
io_timeout_data | timeout.h | req, timer, ts, mode, flags |  |  | io_timeout_data
io_rsrc_node | rsrc.h | type, refs, tag, file_ptr, buf |  |  | io_rsrc_node
io_mapped_ubuf | rsrc.h | ubuf, len, nr_bvecs, folio_shift, refs, acct_pages, ), priv, is_kbuf, dir, __counted_by(nr_bvecs) |  |  | io_mapped_ubuf
io_imu_folio_data | rsrc.h | nr_pages_head, nr_pages_mid, folio_shift, nr_folios |  |  | io_imu_folio_data
io_sq_data | sqpoll.h | refs, park_pending, lock, ctx_list, thread, wait, sq_thread_idle, sq_cpu, task_pid, task_tgid, work_time, state, exited |  |  | io_sq_data
io_nop | nop.c | file, result, fd, flags | define | define | io_nop
io_cancel_data | cancel.h | ctx, data, file |  |  | io_cancel_data
io_open | openclose.c | file, dfd, file_slot, filename, how, nofile | bool | bool | io_open
io_close | openclose.c | file, fd, file_slot | bool | bool | io_close
io_fixed_install | openclose.c | file, o_flags | bool | bool | io_fixed_install
io_defer_entry | io_uring.c | list, req, seq |  |  | io_defer_entry
ext_arg | io_uring.c | argsz, ts, sig, min_time, ts_set, iowait | appropriate | appropriate | ext_arg
io_tctx_exit | io_uring.c | task_work, completion, ctx |  |  | io_tctx_exit
io_task_cancel | io_uring.c | tctx, all |  |  | io_task_cancel
io_xattr | xattr.c | file, ctx, filename | void | void | io_xattr
io_waitid_async | waitid.h | req, wo |  |  | io_waitid_async
io_waitid | waitid.c | file, which, upid, options, refs, head, infop, info | void | void | io_waitid
io_notif_data | notif.h | file, uarg, next, head, account_pages, zc_report, zc_used, zc_copied | define | define | io_notif_data

If the following row value in a column is missing, assume the value is the same with the previous row in the same column.
Continue until all data structures documented properly.
