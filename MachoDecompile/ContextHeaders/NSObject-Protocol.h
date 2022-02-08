// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0



@protocol NSObject

@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

-(char)isEqual:(id)arg0 ;
-(Class)class;
-(id)self;
-(id)performSelector:(SEL)arg0 ;
-(id)performSelector:(SEL)arg0 withObject:(id)arg1 ;
-(id)performSelector:(SEL)arg0 withObject:(id)arg1 withObject:(id)arg2 ;
-(char)isProxy;
-(char)isKindOfClass:(Class)arg0 ;
-(char)isMemberOfClass:(Class)arg0 ;
-(char)conformsToProtocol:(id)arg0 ;
-(char)respondsToSelector:(SEL)arg0 ;
-(id)retain;
-(void)release;
-(id)autorelease;
-(NSUInteger)retainCount;
-(struct _NSZone *)zone;
-(NSUInteger)hash;
-(Class)superclass;
-(id)description;

@optional
-(id)debugDescription;
@end

