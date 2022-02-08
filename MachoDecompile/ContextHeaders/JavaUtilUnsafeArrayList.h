// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILUNSAFEARRAYLIST_H
#define JAVAUTILUNSAFEARRAYLIST_H



#import "JavaUtilAbstractList.h"
#import "IOSClass.h"
#import "IOSObjectArray.h"

@interface JavaUtilUnsafeArrayList : JavaUtilAbstractList {
    IOSClass *elementType_;
    IOSObjectArray *array_;
    int size_;
}




-(id)initWithIOSClass:(id)arg0 withInt:(int)arg1 ;
-(BOOL)addWithId:(id)arg0 ;
-(id)array;
-(id)getWithInt:(int)arg0 ;
-(int)size;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif