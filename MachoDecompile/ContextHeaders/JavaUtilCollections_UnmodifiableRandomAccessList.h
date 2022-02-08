// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_UNMODIFIABLERANDOMACCESSLIST_H
#define JAVAUTILCOLLECTIONS_UNMODIFIABLERANDOMACCESSLIST_H

@class UnmodifiableList;

#import <Foundation/Foundation.h>

#import "JavaUtilRandomAccess-Protocol.h"

@interface JavaUtilCollections_UnmodifiableRandomAccessList : UnmodifiableList <JavaUtilRandomAccess>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilList:(id)arg0 ;
-(id)subListWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)writeReplace;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif