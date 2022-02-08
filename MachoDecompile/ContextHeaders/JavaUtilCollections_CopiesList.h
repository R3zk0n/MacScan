// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_COPIESLIST_H
#define JAVAUTILCOLLECTIONS_COPIESLIST_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractList.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilCollections_CopiesList : JavaUtilAbstractList <JavaIoSerializable>

 {
    int n_;
    id *element_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withId:(id)arg1 ;
-(BOOL)containsWithId:(id)arg0 ;
-(int)size;
-(id)getWithInt:(int)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif