

set (SOURCE_LIB_BOOST_THREAD_TEST
   test_thread.cpp
   test_thread_id.cpp
   test_hardware_concurrency.cpp
   test_thread_move.cpp
   test_thread_return_local.cpp
   test_thread_move_return.cpp
   test_thread_launching.cpp
   test_thread_mf.cpp
   test_thread_exit.cpp
   test_move_function.cpp
   test_mutex.cpp
   test_condition_notify_one.cpp
   test_condition_timed_wait_times_out.cpp
   test_condition_notify_all.cpp
   test_condition.cpp
   test_tss.cpp
   test_once.cpp
   test_xtime.cpp
   test_barrier.cpp
   test_shared_mutex.cpp
   test_shared_mutex_part_2.cpp
   test_shared_mutex_timed_locks.cpp
   test_lock_concept.cpp
   test_generic_locks.cpp
   test_futures.cpp

   #compile-fail no_implicit_move_from_lvalue_thread.cpp
   #compile-fail no_implicit_assign_from_lvalue_thread.cpp
)

add_library (lib_boost_thread STATIC ${SOURCE_LIB_BOOST_THREAD_TEST})
