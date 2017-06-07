#ifndef _CISCO_DATA_COLLECTION_MIB_
#define _CISCO_DATA_COLLECTION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_DATA_COLLECTION_MIB {

class CiscoDataCollectionMib : public Entity
{
    public:
        CiscoDataCollectionMib();
        ~CiscoDataCollectionMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

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


class CiscoDataCollectionMib::Cdcvfile : public Entity
{
    public:
        Cdcvfile();
        ~Cdcvfile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdcvfilepersistentstorage; //type: boolean
        YLeaf cdcvfilemaxsizehitslimit; //type: uint32

}; // CiscoDataCollectionMib::Cdcvfile


class CiscoDataCollectionMib::Cdcvfiletable : public Entity
{
    public:
        Cdcvfiletable();
        ~Cdcvfiletable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdcvfileentry; //type: CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry> > cdcvfileentry;
        
}; // CiscoDataCollectionMib::Cdcvfiletable


class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry : public Entity
{
    public:
        Cdcvfileentry();
        ~Cdcvfileentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdcvfileindex; //type: uint32
        YLeaf cdcvfilename; //type: string
        YLeaf cdcvfiledescription; //type: string
        YLeaf cdcvfilecommand; //type: CdcvfilecommandEnum
        YLeaf cdcvfilemaxsize; //type: uint32
        YLeaf cdcvfilecurrentsize; //type: uint32
        YLeaf cdcvfileformat; //type: CdcfileformatEnum
        YLeaf cdcvfilecollectmode; //type: CdcvfilecollectmodeEnum
        YLeaf cdcvfilecollectionperiod; //type: uint32
        YLeaf cdcvfileretentionperiod; //type: uint32
        YLeaf cdcvfileadminstatus; //type: CdcvfileadminstatusEnum
        YLeaf cdcvfileoperstatus; //type: CdcvfileoperstatusEnum
        YLeaf cdcvfileerrorcode; //type: CdcvfileerrorcodeEnum
        YLeaf cdcvfilecollectionerrorenable; //type: boolean
        YLeaf cdcvfilerowstatus; //type: RowstatusEnum
        class CdcvfilecommandEnum;
        class CdcvfilecollectmodeEnum;
        class CdcvfileadminstatusEnum;
        class CdcvfileoperstatusEnum;
        class CdcvfileerrorcodeEnum;

}; // CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry


class CiscoDataCollectionMib::Cdcvfilemgmttable : public Entity
{
    public:
        Cdcvfilemgmttable();
        ~Cdcvfilemgmttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdcvfilemgmtentry; //type: CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry> > cdcvfilemgmtentry;
        
}; // CiscoDataCollectionMib::Cdcvfilemgmttable


class CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry : public Entity
{
    public:
        Cdcvfilemgmtentry();
        ~Cdcvfilemgmtentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::cdcvfileindex)
        YLeaf cdcvfileindex;
        YLeaf cdcvfilemgmtindex; //type: uint32
        YLeaf cdcvfilemgmtname; //type: string
        YLeaf cdcvfilemgmttimestamp; //type: string
        YLeaf cdcvfilemgmttimetolive; //type: uint32
        YLeaf cdcvfilemgmtcommand; //type: CdcvfilemgmtcommandEnum
        YLeaf cdcvfilemgmtxferurl; //type: binary
        YLeaf cdcvfilemgmtlastxferstatus; //type: CdcfilexferstatusEnum
        YLeaf cdcvfilemgmtlastxferurl; //type: binary
        class CdcvfilemgmtcommandEnum;

}; // CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry


class CiscoDataCollectionMib::Cdcdgtable : public Entity
{
    public:
        Cdcdgtable();
        ~Cdcdgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdcdgentry; //type: CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry> > cdcdgentry;
        
}; // CiscoDataCollectionMib::Cdcdgtable


class CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry : public Entity
{
    public:
        Cdcdgentry();
        ~Cdcdgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdcdgindex; //type: uint32
        YLeaf cdcdgcomment; //type: string
        YLeaf cdcdgtype; //type: CdcdgtypeEnum
        YLeaf cdcdgvfileindex; //type: uint32
        YLeaf cdcdgtargettag; //type: string
        YLeaf cdcdgcontextname; //type: string
        YLeaf cdcdgobject; //type: string
        YLeaf cdcdgobjectgrpindex; //type: uint32
        YLeaf cdcdginstgrpindex; //type: uint32
        YLeaf cdcdgpollperiod; //type: uint32
        YLeaf cdcdgrowstatus; //type: RowstatusEnum
        class CdcdgtypeEnum;

}; // CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry


class CiscoDataCollectionMib::Cdcdgbaseobjecttable : public Entity
{
    public:
        Cdcdgbaseobjecttable();
        ~Cdcdgbaseobjecttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdcdgbaseobjectentry; //type: CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry> > cdcdgbaseobjectentry;
        
}; // CiscoDataCollectionMib::Cdcdgbaseobjecttable


class CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry : public Entity
{
    public:
        Cdcdgbaseobjectentry();
        ~Cdcdgbaseobjectentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdcdgbaseobjectgrpindex; //type: uint32
        YLeaf cdcdgbaseobjectindex; //type: uint32
        YLeaf cdcdgbaseobjectsubtree; //type: string
        YLeaf cdcdgbaseobjectlist; //type: binary
        YLeaf cdcdgbaseobjectrowstatus; //type: RowstatusEnum

}; // CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry


class CiscoDataCollectionMib::Cdcdginstancetable : public Entity
{
    public:
        Cdcdginstancetable();
        ~Cdcdginstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdcdginstanceentry; //type: CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry> > cdcdginstanceentry;
        
}; // CiscoDataCollectionMib::Cdcdginstancetable


class CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry : public Entity
{
    public:
        Cdcdginstanceentry();
        ~Cdcdginstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdcdginstancegrpindex; //type: uint32
        YLeaf cdcdginstanceindex; //type: uint32
        YLeaf cdcdginstancetype; //type: CdcdginstancetypeEnum
        YLeaf cdcdginstanceoid; //type: string
        YLeaf cdcdginstanceoidend; //type: string
        YLeaf cdcdginstancenumrepititions; //type: uint32
        YLeaf cdcdginstanceotherptr; //type: string
        YLeaf cdcdginstancerowstatus; //type: RowstatusEnum
        class CdcdginstancetypeEnum;

}; // CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry


class CiscoDataCollectionMib::Cdcfilexferconftable : public Entity
{
    public:
        Cdcfilexferconftable();
        ~Cdcfilexferconftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdcfilexferconfentry; //type: CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry

        std::vector<std::shared_ptr<CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry> > cdcfilexferconfentry;
        
}; // CiscoDataCollectionMib::Cdcfilexferconftable


class CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry : public Entity
{
    public:
        Cdcfilexferconfentry();
        ~Cdcfilexferconfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_DATA_COLLECTION_MIB::CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::cdcvfileindex)
        YLeaf cdcvfileindex;
        YLeaf cdcfilexferconfpriurl; //type: binary
        YLeaf cdcfilexferconfsecurl; //type: binary
        YLeaf cdcfilexferconfretryperiod; //type: uint32
        YLeaf cdcfilexferconfretrycount; //type: uint32
        YLeaf cdcfilexferconfsuccessenable; //type: boolean
        YLeaf cdcfilexferconffailureenable; //type: boolean

}; // CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry

class CdcfilexferstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf notStarted;
        static const Enum::YLeaf success;
        static const Enum::YLeaf aborted;
        static const Enum::YLeaf fileOpenFailRemote;
        static const Enum::YLeaf badDomainName;
        static const Enum::YLeaf unreachableIpAddress;
        static const Enum::YLeaf networkFailed;
        static const Enum::YLeaf fileWriteFailed;
        static const Enum::YLeaf authFailed;

};

class CdcfileformatEnum : public Enum
{
    public:
        static const Enum::YLeaf cdcBulkASCII;
        static const Enum::YLeaf cdcBulkBinary;
        static const Enum::YLeaf cdcSchemaASCII;

};

class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfilecommandEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf swapToNewFile;
        static const Enum::YLeaf collectNow;

};

class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfilecollectmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf manual;

};

class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileadminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf error;

};

class CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileerrorcodeEnum : public Enum
{
    public:
        static const Enum::YLeaf noError;
        static const Enum::YLeaf otherError;
        static const Enum::YLeaf noSpace;
        static const Enum::YLeaf openError;
        static const Enum::YLeaf tooSmallMaxSize;
        static const Enum::YLeaf tooManyMaxSizeHits;
        static const Enum::YLeaf noResource;

};

class CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::CdcvfilemgmtcommandEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf delete_;
        static const Enum::YLeaf transfer;
        static const Enum::YLeaf abortTransfer;

};

class CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::CdcdgtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf object;
        static const Enum::YLeaf table;

};

class CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::CdcdginstancetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf individual;
        static const Enum::YLeaf range;
        static const Enum::YLeaf repititions;
        static const Enum::YLeaf subTree;
        static const Enum::YLeaf other;

};


}
}

#endif /* _CISCO_DATA_COLLECTION_MIB_ */

