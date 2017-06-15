#ifndef _CISCO_BULK_FILE_MIB_
#define _CISCO_BULK_FILE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_BULK_FILE_MIB {

class CiscoBulkFileMib : public Entity
{
    public:
        CiscoBulkFileMib();
        ~CiscoBulkFileMib();

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

        class Cbfdefine; //type: CiscoBulkFileMib::Cbfdefine
        class Cbfstatus; //type: CiscoBulkFileMib::Cbfstatus
        class Cbfdefinefiletable; //type: CiscoBulkFileMib::Cbfdefinefiletable
        class Cbfdefineobjecttable; //type: CiscoBulkFileMib::Cbfdefineobjecttable
        class Cbfstatusfiletable; //type: CiscoBulkFileMib::Cbfstatusfiletable

        std::shared_ptr<CISCO_BULK_FILE_MIB::CiscoBulkFileMib::Cbfdefine> cbfdefine_;
        std::shared_ptr<CISCO_BULK_FILE_MIB::CiscoBulkFileMib::Cbfdefinefiletable> cbfdefinefiletable_;
        std::shared_ptr<CISCO_BULK_FILE_MIB::CiscoBulkFileMib::Cbfdefineobjecttable> cbfdefineobjecttable_;
        std::shared_ptr<CISCO_BULK_FILE_MIB::CiscoBulkFileMib::Cbfstatus> cbfstatus_;
        std::shared_ptr<CISCO_BULK_FILE_MIB::CiscoBulkFileMib::Cbfstatusfiletable> cbfstatusfiletable_;
        
}; // CiscoBulkFileMib


class CiscoBulkFileMib::Cbfdefine : public Entity
{
    public:
        Cbfdefine();
        ~Cbfdefine();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cbfdefinemaxfiles; //type: uint32
        YLeaf cbfdefinefiles; //type: uint32
        YLeaf cbfdefinehighfiles; //type: uint32
        YLeaf cbfdefinefilesrefused; //type: uint32
        YLeaf cbfdefinemaxobjects; //type: uint32
        YLeaf cbfdefineobjects; //type: uint32
        YLeaf cbfdefinehighobjects; //type: uint32
        YLeaf cbfdefineobjectsrefused; //type: uint32

}; // CiscoBulkFileMib::Cbfdefine


class CiscoBulkFileMib::Cbfstatus : public Entity
{
    public:
        Cbfstatus();
        ~Cbfstatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cbfstatusmaxfiles; //type: uint32
        YLeaf cbfstatusfiles; //type: uint32
        YLeaf cbfstatushighfiles; //type: uint32
        YLeaf cbfstatusfilesbumped; //type: uint32

}; // CiscoBulkFileMib::Cbfstatus


class CiscoBulkFileMib::Cbfdefinefiletable : public Entity
{
    public:
        Cbfdefinefiletable();
        ~Cbfdefinefiletable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbfdefinefileentry; //type: CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry

        std::vector<std::shared_ptr<CISCO_BULK_FILE_MIB::CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry> > cbfdefinefileentry_;
        
}; // CiscoBulkFileMib::Cbfdefinefiletable


class CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry : public Entity
{
    public:
        Cbfdefinefileentry();
        ~Cbfdefinefileentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cbfdefinefileindex; //type: uint32
        YLeaf cbfdefinefilename; //type: string
        YLeaf cbfdefinefilestorage; //type: CbfdefinefilestorageEnum
        YLeaf cbfdefinefileformat; //type: CbfdefinefileformatEnum
        YLeaf cbfdefinefilenow; //type: CbfdefinefilenowEnum
        YLeaf cbfdefinefileentrystatus; //type: RowstatusEnum
        YLeaf cbfdefinefilenotifyoncompletion; //type: boolean
        class CbfdefinefilestorageEnum;
        class CbfdefinefileformatEnum;
        class CbfdefinefilenowEnum;

}; // CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry


class CiscoBulkFileMib::Cbfdefineobjecttable : public Entity
{
    public:
        Cbfdefineobjecttable();
        ~Cbfdefineobjecttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbfdefineobjectentry; //type: CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry

        std::vector<std::shared_ptr<CISCO_BULK_FILE_MIB::CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry> > cbfdefineobjectentry_;
        
}; // CiscoBulkFileMib::Cbfdefineobjecttable


class CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry : public Entity
{
    public:
        Cbfdefineobjectentry();
        ~Cbfdefineobjectentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_BULK_FILE_MIB::CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::cbfdefinefileindex)
        YLeaf cbfdefinefileindex;
        YLeaf cbfdefineobjectindex; //type: uint32
        YLeaf cbfdefineobjectclass; //type: CbfdefineobjectclassEnum
        YLeaf cbfdefineobjectid; //type: string
        YLeaf cbfdefineobjectentrystatus; //type: RowstatusEnum
        YLeaf cbfdefineobjecttableinstance; //type: string
        YLeaf cbfdefineobjectnumentries; //type: uint32
        YLeaf cbfdefineobjectlastpolledinst; //type: string
        class CbfdefineobjectclassEnum;

}; // CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry


class CiscoBulkFileMib::Cbfstatusfiletable : public Entity
{
    public:
        Cbfstatusfiletable();
        ~Cbfstatusfiletable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbfstatusfileentry; //type: CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry

        std::vector<std::shared_ptr<CISCO_BULK_FILE_MIB::CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry> > cbfstatusfileentry_;
        
}; // CiscoBulkFileMib::Cbfstatusfiletable


class CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry : public Entity
{
    public:
        Cbfstatusfileentry();
        ~Cbfstatusfileentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_BULK_FILE_MIB::CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::cbfdefinefileindex)
        YLeaf cbfdefinefileindex;
        YLeaf cbfstatusfileindex; //type: uint32
        YLeaf cbfstatusfilestate; //type: CbfstatusfilestateEnum
        YLeaf cbfstatusfilecompletiontime; //type: uint32
        YLeaf cbfstatusfileentrystatus; //type: RowstatusEnum
        class CbfstatusfilestateEnum;

}; // CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry

class CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefilestorageEnum : public Enum
{
    public:
        static const Enum::YLeaf ephemeral;
        static const Enum::YLeaf volatile_;
        static const Enum::YLeaf permanent;

};

class CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefileformatEnum : public Enum
{
    public:
        static const Enum::YLeaf standardBER;
        static const Enum::YLeaf bulkBinary;
        static const Enum::YLeaf bulkASCII;
        static const Enum::YLeaf variantBERWithCksum;
        static const Enum::YLeaf variantBinWithCksum;

};

class CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefilenowEnum : public Enum
{
    public:
        static const Enum::YLeaf notActive;
        static const Enum::YLeaf ready;
        static const Enum::YLeaf create;
        static const Enum::YLeaf running;
        static const Enum::YLeaf forcedCreate;

};

class CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::CbfdefineobjectclassEnum : public Enum
{
    public:
        static const Enum::YLeaf object;
        static const Enum::YLeaf lexicalTable;
        static const Enum::YLeaf leastCpuTable;

};

class CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::CbfstatusfilestateEnum : public Enum
{
    public:
        static const Enum::YLeaf running;
        static const Enum::YLeaf ready;
        static const Enum::YLeaf emptied;
        static const Enum::YLeaf noSpace;
        static const Enum::YLeaf badName;
        static const Enum::YLeaf writeErr;
        static const Enum::YLeaf noMem;
        static const Enum::YLeaf buffErr;
        static const Enum::YLeaf aborted;

};


}
}

#endif /* _CISCO_BULK_FILE_MIB_ */

