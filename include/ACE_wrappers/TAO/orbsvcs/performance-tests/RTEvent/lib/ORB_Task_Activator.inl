/**
 * @file ORB_Task_Activator.inl
 *
` * $Id: ORB_Task_Activator.inl 14 2007-02-01 15:49:12Z mitza $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

ACE_INLINE
ORB_Task_Activator::ORB_Task_Activator (int priority,
                                        int scheduling_class,
                                        int nthreads,
                                        ORB_Task *task)
  : Task_Activator<ORB_Task> (priority,
                              scheduling_class,
                              nthreads,
                              task)
{
}
