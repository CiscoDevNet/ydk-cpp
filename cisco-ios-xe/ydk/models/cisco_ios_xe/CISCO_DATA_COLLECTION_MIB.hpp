#ifndef _CISCO_DATA_COLLECTION_MIB_
#define _CISCO_DATA_COLLECTION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_DATA_COLLECTION_MIB {

class CiscoDataCollectionMib : public ydk::Entity
{
    public:
        CiscoDataCollectionMib();
        ~CiscoDataCollectionMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Cdcvfile; //type: CiscoDataCollectionMib::Cdcvfile
        class Cdcvfiletable; //type: CiscoDataCollectionMib::Cdcvfiletable
        class Cdcvfilemgmttable; //type: CiscoDataCollectionMib::Cdcvfilemgmttable
        class Cdcdgtable; //type: CiscoDataCollectionMib::Cdcdgtable
        class Cdcdgbaseobjecttable; //type: CiscoDataCollectionMib::Cdcdgbaseobjecttable
        class Cdcdginstancetable; //type: CiscoDataCollectionMib::Cdcdginstancetable
        class Cdcfilexferconftable; //type: CiscoDataCollectionMib::Cdcfilexferconftable

        std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcdgbaseobjecttable> cdcdgbaseobjecttable;
        std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcdginstancetable> cdcdginstancetable;
        std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcdgtable> cdcdgtable;
        std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcfilexferconftable> cdcfilexferconftable;
        std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcvfile> cdcvfile;
        std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcvfilemgmttable> cdcvfilemgmttable;
        std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcvfiletable> cdcvfiletable;
        
}; // CiscoDataCollectionMib


class CiscoDataCollectionMib::Cdcvfile : public ydk::Entity
{
    public:
        Cdcvfile();
        ~Cdcvfile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdcvfilepersistentstorage; //type: boolean
        ydk::YLeaf cdcvfilemaxsizehitslimit; //type: uint32

}; // CiscoDataCollectionMib::Cdcvfile


class CiscoDataCollectionMib::Cdcvfiletable : public ydk::Entity
{
    public:
        Cdcvfiletable();
        ~Cdcvfiletable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdcvfileentry; //type: CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry> > cdcvfileentry;
        
}; // CiscoDataCollectionMib::Cdcvfiletable


class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry : public ydk::Entity
{
    public:
        Cdcvfileentry();
        ~Cdcvfileentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdcvfileindex; //type: uint32
        ydk::YLeaf cdcvfilename; //type: string
        ydk::YLeaf cdcvfiledescription; //type: string
        ydk::YLeaf cdcvfilecommand; //type: Cdcvfilecommand
        ydk::YLeaf cdcvfilemaxsize; //type: uint32
        ydk::YLeaf cdcvfilecurrentsize; //type: uint32
        ydk::YLeaf cdcvfileformat; //type: Cdcfileformat
        ydk::YLeaf cdcvfilecollectmode; //type: Cdcvfilecollectmode
        ydk::YLeaf cdcvfilecollectionperiod; //type: uint32
        ydk::YLeaf cdcvfileretentionperiod; //type: uint32
        ydk::YLeaf cdcvfileadminstatus; //type: Cdcvfileadminstatus
        ydk::YLeaf cdcvfileoperstatus; //type: Cdcvfileoperstatus
        ydk::YLeaf cdcvfileerrorcode; //type: Cdcvfileerrorcode
        ydk::YLeaf cdcvfilecollectionerrorenable; //type: boolean
        ydk::YLeaf cdcvfilerowstatus; //type: Rowstatus
        class Cdcvfilecommand;
        class Cdcvfilecollectmode;
        class Cdcvfileadminstatus;
        class Cdcvfileoperstatus;
        class Cdcvfileerrorcode;

}; // CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry


class CiscoDataCollectionMib::Cdcvfilemgmttable : public ydk::Entity
{
    public:
        Cdcvfilemgmttable();
        ~Cdcvfilemgmttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdcvfilemgmtentry; //type: CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry> > cdcvfilemgmtentry;
        
}; // CiscoDataCollectionMib::Cdcvfilemgmttable


class CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry : public ydk::Entity
{
    public:
        Cdcvfilemgmtentry();
        ~Cdcvfilemgmtentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::cdcvfileindex)
        ydk::YLeaf cdcvfileindex;
        ydk::YLeaf cdcvfilemgmtindex; //type: uint32
        ydk::YLeaf cdcvfilemgmtname; //type: string
        ydk::YLeaf cdcvfilemgmttimestamp; //type: string
        ydk::YLeaf cdcvfilemgmttimetolive; //type: uint32
        ydk::YLeaf cdcvfilemgmtcommand; //type: Cdcvfilemgmtcommand
        ydk::YLeaf cdcvfilemgmtxferurl; //type: binary
        ydk::YLeaf cdcvfilemgmtlastxferstatus; //type: Cdcfilexferstatus
        ydk::YLeaf cdcvfilemgmtlastxferurl; //type: binary
        class Cdcvfilemgmtcommand;

}; // CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry


class CiscoDataCollectionMib::Cdcdgtable : public ydk::Entity
{
    public:
        Cdcdgtable();
        ~Cdcdgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdcdgentry; //type: CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry> > cdcdgentry;
        
}; // CiscoDataCollectionMib::Cdcdgtable


class CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry : public ydk::Entity
{
    public:
        Cdcdgentry();
        ~Cdcdgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdcdgindex; //type: uint32
        ydk::YLeaf cdcdgcomment; //type: string
        ydk::YLeaf cdcdgtype; //type: Cdcdgtype
        ydk::YLeaf cdcdgvfileindex; //type: uint32
        ydk::YLeaf cdcdgtargettag; //type: string
        ydk::YLeaf cdcdgcontextname; //type: string
        ydk::YLeaf cdcdgobject; //type: string
        ydk::YLeaf cdcdgobjectgrpindex; //type: uint32
        ydk::YLeaf cdcdginstgrpindex; //type: uint32
        ydk::YLeaf cdcdgpollperiod; //type: uint32
        ydk::YLeaf cdcdgrowstatus; //type: Rowstatus
        class Cdcdgtype;

}; // CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry


class CiscoDataCollectionMib::Cdcdgbaseobjecttable : public ydk::Entity
{
    public:
        Cdcdgbaseobjecttable();
        ~Cdcdgbaseobjecttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdcdgbaseobjectentry; //type: CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry> > cdcdgbaseobjectentry;
        
}; // CiscoDataCollectionMib::Cdcdgbaseobjecttable


class CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry : public ydk::Entity
{
    public:
        Cdcdgbaseobjectentry();
        ~Cdcdgbaseobjectentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdcdgbaseobjectgrpindex; //type: uint32
        ydk::YLeaf cdcdgbaseobjectindex; //type: uint32
        ydk::YLeaf cdcdgbaseobjectsubtree; //type: string
        ydk::YLeaf cdcdgbaseobjectlist; //type: binary
        ydk::YLeaf cdcdgbaseobjectrowstatus; //type: Rowstatus

}; // CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry


class CiscoDataCollectionMib::Cdcdginstancetable : public ydk::Entity
{
    public:
        Cdcdginstancetable();
        ~Cdcdginstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdcdginstanceentry; //type: CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry> > cdcdginstanceentry;
        
}; // CiscoDataCollectionMib::Cdcdginstancetable


class CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry : public ydk::Entity
{
    public:
        Cdcdginstanceentry();
        ~Cdcdginstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdcdginstancegrpindex; //type: uint32
        ydk::YLeaf cdcdginstanceindex; //type: uint32
        ydk::YLeaf cdcdginstancetype; //type: Cdcdginstancetype
        ydk::YLeaf cdcdginstanceoid; //type: string
        ydk::YLeaf cdcdginstanceoidend; //type: string
        ydk::YLeaf cdcdginstancenumrepititions; //type: uint32
        ydk::YLeaf cdcdginstanceotherptr; //type: string
        ydk::YLeaf cdcdginstancerowstatus; //type: Rowstatus
        class Cdcdginstancetype;

}; // CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry


class CiscoDataCollectionMib::Cdcfilexferconftable : public ydk::Entity
{
    public:
        Cdcfilexferconftable();
        ~Cdcfilexferconftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cdcfilexferconfentry; //type: CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry> > cdcfilexferconfentry;
        
}; // CiscoDataCollectionMib::Cdcfilexferconftable


class CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry : public ydk::Entity
{
    public:
        Cdcfilexferconfentry();
        ~Cdcfilexferconfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::cdcvfileindex)
        ydk::YLeaf cdcvfileindex;
        ydk::YLeaf cdcfilexferconfpriurl; //type: binary
        ydk::YLeaf cdcfilexferconfsecurl; //type: binary
        ydk::YLeaf cdcfilexferconfretryperiod; //type: uint32
        ydk::YLeaf cdcfilexferconfretrycount; //type: uint32
        ydk::YLeaf cdcfilexferconfsuccessenable; //type: boolean
        ydk::YLeaf cdcfilexferconffailureenable; //type: boolean

}; // CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry

class Cdcfileformat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cdcBulkASCII;
        static const ydk::Enum::YLeaf cdcBulkBinary;
        static const ydk::Enum::YLeaf cdcSchemaASCII;

};

class Cdcfilexferstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notStarted;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf aborted;
        static const ydk::Enum::YLeaf fileOpenFailRemote;
        static const ydk::Enum::YLeaf badDomainName;
        static const ydk::Enum::YLeaf unreachableIpAddress;
        static const ydk::Enum::YLeaf networkFailed;
        static const ydk::Enum::YLeaf fileWriteFailed;
        static const ydk::Enum::YLeaf authFailed;

};

class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::Cdcvfilecommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf swapToNewFile;
        static const ydk::Enum::YLeaf collectNow;

};

class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::Cdcvfilecollectmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf manual;

};

class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::Cdcvfileadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::Cdcvfileoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf error;

};

class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::Cdcvfileerrorcode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noError;
        static const ydk::Enum::YLeaf otherError;
        static const ydk::Enum::YLeaf noSpace;
        static const ydk::Enum::YLeaf openError;
        static const ydk::Enum::YLeaf tooSmallMaxSize;
        static const ydk::Enum::YLeaf tooManyMaxSizeHits;
        static const ydk::Enum::YLeaf noResource;

};

class CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::Cdcvfilemgmtcommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf transfer;
        static const ydk::Enum::YLeaf abortTransfer;

};

class CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::Cdcdgtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf object;
        static const ydk::Enum::YLeaf table;

};

class CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::Cdcdginstancetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf individual;
        static const ydk::Enum::YLeaf range;
        static const ydk::Enum::YLeaf repititions;
        static const ydk::Enum::YLeaf subTree;
        static const ydk::Enum::YLeaf other;

};


}
}

#endif /* _CISCO_DATA_COLLECTION_MIB_ */

