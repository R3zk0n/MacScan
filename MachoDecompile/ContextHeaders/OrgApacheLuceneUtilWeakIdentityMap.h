// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILWEAKIDENTITYMAP_H
#define ORGAPACHELUCENEUTILWEAKIDENTITYMAP_H


#import <Foundation/Foundation.h>

#import "JavaLangRefReferenceQueue.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneUtilWeakIdentityMap : NSObject {
    JavaLangRefReferenceQueue *queue_;
    id<JavaUtilMap> *backingStore_;
    BOOL reapOnRead_;
}




-(id)initWithJavaUtilMap:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)clear;
-(BOOL)containsKeyWithId:(id)arg0 ;
-(id)getWithId:(id)arg0 ;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(BOOL)isEmpty;
-(id)removeWithId:(id)arg0 ;
-(int)size;
-(id)keyIterator;
-(id)valueIterator;
-(void)reap;
-(void)dealloc;
+(id)newHashMap;
+(id)newHashMapWithBoolean:(BOOL)arg0 ;
+(id)newConcurrentHashMap;
+(id)newConcurrentHashMapWithBoolean:(BOOL)arg0 ;
+(void)initialize;


@end


#endif