// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0



@protocol LibcoreIoOs


-(id)acceptWithJavaIoFileDescriptor:(id)arg0 withJavaNetInetSocketAddress:(id)arg1 ;
-(BOOL)accessWithNSString:(id)arg0 withInt:(int)arg1 ;
-(BOOL)canAccessWithNSString:(id)arg0 withInt:(int)arg1 ;
-(void)bindWithJavaIoFileDescriptor:(id)arg0 withJavaNetInetAddress:(id)arg1 withInt:(int)arg2 ;
-(void)chmodWithNSString:(id)arg0 withInt:(int)arg1 ;
-(void)chownWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)closeWithJavaIoFileDescriptor:(id)arg0 ;
-(void)connectWithJavaIoFileDescriptor:(id)arg0 withJavaNetInetAddress:(id)arg1 withInt:(int)arg2 ;
-(id)dupWithJavaIoFileDescriptor:(id)arg0 ;
-(id)dup2WithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 ;
-(void)fchmodWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 ;
-(void)fchownWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)fcntlFlockWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withLibcoreIoStructFlock:(id)arg2 ;
-(int)fcntlLongWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 ;
-(int)fcntlVoidWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 ;
-(void)fdatasyncWithJavaIoFileDescriptor:(id)arg0 ;
-(id)fstatWithJavaIoFileDescriptor:(id)arg0 ;
-(void)fsyncWithJavaIoFileDescriptor:(id)arg0 ;
-(void)ftruncateWithJavaIoFileDescriptor:(id)arg0 withLong:(NSInteger)arg1 ;
-(id)gai_strerrorWithInt:(int)arg0 ;
-(id)getaddrinfoWithNSString:(id)arg0 withLibcoreIoStructAddrinfo:(id)arg1 ;
-(id)getnameinfoWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(id)getsocknameWithJavaIoFileDescriptor:(id)arg0 ;
-(int)getsockoptByteWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)getsockoptInAddrWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)getsockoptIntWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)getsockoptLingerWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)getsockoptTimevalWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)if_indextonameWithInt:(int)arg0 ;
-(id)inet_ptonWithInt:(int)arg0 withNSString:(id)arg1 ;
-(id)ioctlInetAddressWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withNSString:(id)arg2 ;
-(int)ioctlIntWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withLibcoreUtilMutableInt:(id)arg2 ;
-(BOOL)isattyWithJavaIoFileDescriptor:(id)arg0 ;
-(void)listenWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 ;
-(NSInteger)lseekWithJavaIoFileDescriptor:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(void)mkdirWithNSString:(id)arg0 withInt:(int)arg1 ;
-(void)mincoreWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withByteArray:(id)arg2 ;
-(void)mlockWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)mmapWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaIoFileDescriptor:(id)arg4 withLong:(NSInteger)arg5 ;
-(void)msyncWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(void)munlockWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(void)munmapWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(id)openWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)pipe;
-(int)getpid;
-(int)pollWithLibcoreIoStructPollfdArray:(id)arg0 withInt:(int)arg1 ;
-(int)getppid;
-(int)preadWithJavaIoFileDescriptor:(id)arg0 withJavaNioByteBuffer:(id)arg1 withLong:(NSInteger)arg2 ;
-(int)pwriteWithJavaIoFileDescriptor:(id)arg0 withJavaNioByteBuffer:(id)arg1 withLong:(NSInteger)arg2 ;
-(int)readWithJavaIoFileDescriptor:(id)arg0 withJavaNioByteBuffer:(id)arg1 ;
-(int)readWithJavaIoFileDescriptor:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(int)recvfromWithJavaIoFileDescriptor:(id)arg0 withJavaNioByteBuffer:(id)arg1 withInt:(int)arg2 withJavaNetInetSocketAddress:(id)arg3 ;
-(int)recvfromWithJavaIoFileDescriptor:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaNetInetSocketAddress:(id)arg5 ;
-(int)readvWithJavaIoFileDescriptor:(id)arg0 withNSObjectArray:(id)arg1 withIntArray:(id)arg2 withIntArray:(id)arg3 ;
-(id)realpathWithNSString:(id)arg0 ;
-(void)removeWithNSString:(id)arg0 ;
-(void)renameWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(NSInteger)sendfileWithJavaIoFileDescriptor:(id)arg0 withJavaIoFileDescriptor:(id)arg1 withLibcoreUtilMutableLong:(id)arg2 withLong:(NSInteger)arg3 ;
-(int)sendtoWithJavaIoFileDescriptor:(id)arg0 withJavaNioByteBuffer:(id)arg1 withInt:(int)arg2 withJavaNetInetAddress:(id)arg3 withInt:(int)arg4 ;
-(int)sendtoWithJavaIoFileDescriptor:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaNetInetAddress:(id)arg5 withInt:(int)arg6 ;
-(void)setsockoptByteWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)setsockoptGroupReqWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLibcoreIoStructGroupReq:(id)arg3 ;
-(void)setsockoptGroupSourceReqWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLibcoreIoStructGroupSourceReq:(id)arg3 ;
-(void)setsockoptIfreqWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withNSString:(id)arg3 ;
-(void)setsockoptIntWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)setsockoptIpMreqnWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)setsockoptLingerWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLibcoreIoStructLinger:(id)arg3 ;
-(void)setsockoptTimevalWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLibcoreIoStructTimeval:(id)arg3 ;
-(void)shutdownWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 ;
-(id)socketWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)socketpairWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaIoFileDescriptor:(id)arg3 withJavaIoFileDescriptor:(id)arg4 ;
-(id)statWithNSString:(id)arg0 ;
-(id)statvfsWithNSString:(id)arg0 ;
-(id)strerrorWithInt:(int)arg0 ;
-(NSInteger)sysconfWithInt:(int)arg0 ;
-(void)symlinkWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)tcdrainWithJavaIoFileDescriptor:(id)arg0 ;
-(id)uname;
-(int)writeWithJavaIoFileDescriptor:(id)arg0 withJavaNioByteBuffer:(id)arg1 ;
-(int)writeWithJavaIoFileDescriptor:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(int)writevWithJavaIoFileDescriptor:(id)arg0 withNSObjectArray:(id)arg1 withIntArray:(id)arg2 withIntArray:(id)arg3 ;

@end

