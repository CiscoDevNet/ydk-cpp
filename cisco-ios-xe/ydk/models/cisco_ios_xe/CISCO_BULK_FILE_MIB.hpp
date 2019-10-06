#ifndef _CISCO_BULK_FILE_MIB_
#define _CISCO_BULK_FILE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_BULK_FILE_MIB {

class CISCOBULKFILEMIB : public ydk::Entity
{
    public:
        CISCOBULKFILEMIB();
        ~CISCOBULKFILEMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class CbfDefine; //type: CISCOBULKFILEMIB::CbfDefine
        class CbfStatus; //type: CISCOBULKFILEMIB::CbfStatus
        class CbfDefineFileTable; //type: CISCOBULKFILEMIB::CbfDefineFileTable
        class CbfDefineObjectTable; //type: CISCOBULKFILEMIB::CbfDefineObjectTable
        class CbfStatusFileTable; //type: CISCOBULKFILEMIB::CbfStatusFileTable

        std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::CbfDefine> cbfdefine;
        std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::CbfStatus> cbfstatus;
        std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::CbfDefineFileTable> cbfdefinefiletable;
        std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::CbfDefineObjectTable> cbfdefineobjecttable;
        std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::CbfStatusFileTable> cbfstatusfiletable;
        
}; // CISCOBULKFILEMIB


class CISCOBULKFILEMIB::CbfDefine : public ydk::Entity
{
    public:
        CbfDefine();
        ~CbfDefine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cbfdefinemaxfiles; //type: uint32
        ydk::YLeaf cbfdefinefiles; //type: uint32
        ydk::YLeaf cbfdefinehighfiles; //type: uint32
        ydk::YLeaf cbfdefinefilesrefused; //type: uint32
        ydk::YLeaf cbfdefinemaxobjects; //type: uint32
        ydk::YLeaf cbfdefineobjects; //type: uint32
        ydk::YLeaf cbfdefinehighobjects; //type: uint32
        ydk::YLeaf cbfdefineobjectsrefused; //type: uint32

}; // CISCOBULKFILEMIB::CbfDefine


class CISCOBULKFILEMIB::CbfStatus : public ydk::Entity
{
    public:
        CbfStatus();
        ~CbfStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cbfstatusmaxfiles; //type: uint32
        ydk::YLeaf cbfstatusfiles; //type: uint32
        ydk::YLeaf cbfstatushighfiles; //type: uint32
        ydk::YLeaf cbfstatusfilesbumped; //type: uint32

}; // CISCOBULKFILEMIB::CbfStatus


class CISCOBULKFILEMIB::CbfDefineFileTable : public ydk::Entity
{
    public:
        CbfDefineFileTable();
        ~CbfDefineFileTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CbfDefineFileEntry; //type: CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry

        ydk::YList cbfdefinefileentry;
        
}; // CISCOBULKFILEMIB::CbfDefineFileTable


class CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry : public ydk::Entity
{
    public:
        CbfDefineFileEntry();
        ~CbfDefineFileEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cbfdefinefileindex; //type: uint32
        ydk::YLeaf cbfdefinefilename; //type: string
        ydk::YLeaf cbfdefinefilestorage; //type: CbfDefineFileStorage
        ydk::YLeaf cbfdefinefileformat; //type: CbfDefineFileFormat
        ydk::YLeaf cbfdefinefilenow; //type: CbfDefineFileNow
        ydk::YLeaf cbfdefinefileentrystatus; //type: RowStatus
        ydk::YLeaf cbfdefinefilenotifyoncompletion; //type: boolean
        class CbfDefineFileStorage;
        class CbfDefineFileFormat;
        class CbfDefineFileNow;

}; // CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry


class CISCOBULKFILEMIB::CbfDefineObjectTable : public ydk::Entity
{
    public:
        CbfDefineObjectTable();
        ~CbfDefineObjectTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CbfDefineObjectEntry; //type: CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry

        ydk::YList cbfdefineobjectentry;
        
}; // CISCOBULKFILEMIB::CbfDefineObjectTable


class CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry : public ydk::Entity
{
    public:
        CbfDefineObjectEntry();
        ~CbfDefineObjectEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::cbfdefinefileindex)
        ydk::YLeaf cbfdefinefileindex;
        ydk::YLeaf cbfdefineobjectindex; //type: uint32
        ydk::YLeaf cbfdefineobjectclass; //type: CbfDefineObjectClass
        ydk::YLeaf cbfdefineobjectid; //type: string
        ydk::YLeaf cbfdefineobjectentrystatus; //type: RowStatus
        ydk::YLeaf cbfdefineobjecttableinstance; //type: string
        ydk::YLeaf cbfdefineobjectnumentries; //type: uint32
        ydk::YLeaf cbfdefineobjectlastpolledinst; //type: string
        class CbfDefineObjectClass;

}; // CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry


class CISCOBULKFILEMIB::CbfStatusFileTable : public ydk::Entity
{
    public:
        CbfStatusFileTable();
        ~CbfStatusFileTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CbfStatusFileEntry; //type: CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry

        ydk::YList cbfstatusfileentry;
        
}; // CISCOBULKFILEMIB::CbfStatusFileTable


class CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry : public ydk::Entity
{
    public:
        CbfStatusFileEntry();
        ~CbfStatusFileEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::cbfdefinefileindex)
        ydk::YLeaf cbfdefinefileindex;
        ydk::YLeaf cbfstatusfileindex; //type: uint32
        ydk::YLeaf cbfstatusfilestate; //type: CbfStatusFileState
        ydk::YLeaf cbfstatusfilecompletiontime; //type: uint32
        ydk::YLeaf cbfstatusfileentrystatus; //type: RowStatus
        class CbfStatusFileState;

}; // CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry

class CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileStorage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ephemeral;
        static const ydk::Enum::YLeaf volatile_;
        static const ydk::Enum::YLeaf permanent;

        static int get_enum_value(const std::string & name) {
            if (name == "ephemeral") return 1;
            if (name == "volatile") return 2;
            if (name == "permanent") return 3;
            return -1;
        }
};

class CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standardBER;
        static const ydk::Enum::YLeaf bulkBinary;
        static const ydk::Enum::YLeaf bulkASCII;
        static const ydk::Enum::YLeaf variantBERWithCksum;
        static const ydk::Enum::YLeaf variantBinWithCksum;

        static int get_enum_value(const std::string & name) {
            if (name == "standardBER") return 1;
            if (name == "bulkBinary") return 2;
            if (name == "bulkASCII") return 3;
            if (name == "variantBERWithCksum") return 4;
            if (name == "variantBinWithCksum") return 5;
            return -1;
        }
};

class CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileNow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notActive;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf create;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf forcedCreate;

        static int get_enum_value(const std::string & name) {
            if (name == "notActive") return 1;
            if (name == "ready") return 2;
            if (name == "create") return 3;
            if (name == "running") return 4;
            if (name == "forcedCreate") return 5;
            return -1;
        }
};

class CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::CbfDefineObjectClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf object;
        static const ydk::Enum::YLeaf lexicalTable;
        static const ydk::Enum::YLeaf leastCpuTable;

        static int get_enum_value(const std::string & name) {
            if (name == "object") return 1;
            if (name == "lexicalTable") return 2;
            if (name == "leastCpuTable") return 3;
            return -1;
        }
};

class CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::CbfStatusFileState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf emptied;
        static const ydk::Enum::YLeaf noSpace;
        static const ydk::Enum::YLeaf badName;
        static const ydk::Enum::YLeaf writeErr;
        static const ydk::Enum::YLeaf noMem;
        static const ydk::Enum::YLeaf buffErr;
        static const ydk::Enum::YLeaf aborted;

        static int get_enum_value(const std::string & name) {
            if (name == "running") return 1;
            if (name == "ready") return 2;
            if (name == "emptied") return 3;
            if (name == "noSpace") return 4;
            if (name == "badName") return 5;
            if (name == "writeErr") return 6;
            if (name == "noMem") return 7;
            if (name == "buffErr") return 8;
            if (name == "aborted") return 9;
            return -1;
        }
};


}
}

#endif /* _CISCO_BULK_FILE_MIB_ */

