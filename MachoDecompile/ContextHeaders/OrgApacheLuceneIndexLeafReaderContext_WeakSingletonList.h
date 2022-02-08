// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXLEAFREADERCONTEXT_WEAKSINGLETONLIST_H
#define ORGAPACHELUCENEINDEXLEAFREADERCONTEXT_WEAKSINGLETONLIST_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractList.h"
#import "JavaIoSerializable-Protocol.h"

@interface OrgApacheLuceneIndexLeafReaderContext_WeakSingletonList : JavaUtilAbstractList <JavaIoSerializable>

 {
    id *element_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithId:(id)arg0 ;
-(BOOL)containsWithId:(id)arg0 ;
-(id)getWithInt:(int)arg0 ;
-(int)size;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif