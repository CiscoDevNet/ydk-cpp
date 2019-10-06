#ifndef _CISCO_DATA_COLLECTION_MIB_
#define _CISCO_DATA_COLLECTION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_DATA_COLLECTION_MIB {

class CISCODATACOLLECTIONMIB : public ydk::Entity
{
    public:
        CISCODATACOLLECTIONMIB();
        ~CISCODATACOLLECTIONMIB();

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

        class CdcVFile; //type: CISCODATACOLLECTIONMIB::CdcVFile
        class CdcVFileTable; //type: CISCODATACOLLECTIONMIB::CdcVFileTable
        class CdcVFileMgmtTable; //type: CISCODATACOLLECTIONMIB::CdcVFileMgmtTable
        class CdcDGTable; //type: CISCODATACOLLECTIONMIB::CdcDGTable
        class CdcDGBaseObjectTable; //type: CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable
        class CdcDGInstanceTable; //type: CISCODATACOLLECTIONMIB::CdcDGInstanceTable
        class CdcFileXferConfTable; //type: CISCODATACOLLECTIONMIB::CdcFileXferConfTable

        std::shared_ptr<cisco_ios_xe::CISCO_DATA_COLLECTION_MIB::CISCODATACOLLECTIONMIB::CdcVFile> cdcvfile;
        std::shared_ptr<cisco_ios_xe::CISCO_DATA_COLLECTION_MIB::CISCODATACOLLECTIONMIB::CdcVFileTable> cdcvfiletable;
        std::shared_ptr<cisco_ios_xe::CISCO_DATA_COLLECTION_MIB::CISCODATACOLLECTIONMIB::CdcVFileMgmtTable> cdcvfilemgmttable;
        std::shared_ptr<cisco_ios_xe::CISCO_DATA_COLLECTION_MIB::CISCODATACOLLECTIONMIB::CdcDGTable> cdcdgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DATA_COLLECTION_MIB::CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable> cdcdgbaseobjecttable;
        std::shared_ptr<cisco_ios_xe::CISCO_DATA_COLLECTION_MIB::CISCODATACOLLECTIONMIB::CdcDGInstanceTable> cdcdginstancetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DATA_COLLECTION_MIB::CISCODATACOLLECTIONMIB::CdcFileXferConfTable> cdcfilexferconftable;
        
}; // CISCODATACOLLECTIONMIB


class CISCODATACOLLECTIONMIB::CdcVFile : public ydk::Entity
{
    public:
        CdcVFile();
        ~CdcVFile();

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

        ydk::YLeaf cdcvfilepersistentstorage; //type: boolean
        ydk::YLeaf cdcvfilemaxsizehitslimit; //type: uint32

}; // CISCODATACOLLECTIONMIB::CdcVFile


class CISCODATACOLLECTIONMIB::CdcVFileTable : public ydk::Entity
{
    public:
        CdcVFileTable();
        ~CdcVFileTable();

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

        class CdcVFileEntry; //type: CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry

        ydk::YList cdcvfileentry;
        
}; // CISCODATACOLLECTIONMIB::CdcVFileTable


class CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry : public ydk::Entity
{
    public:
        CdcVFileEntry();
        ~CdcVFileEntry();

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

        ydk::YLeaf cdcvfileindex; //type: uint32
        ydk::YLeaf cdcvfilename; //type: string
        ydk::YLeaf cdcvfiledescription; //type: string
        ydk::YLeaf cdcvfilecommand; //type: CdcVFileCommand
        ydk::YLeaf cdcvfilemaxsize; //type: uint32
        ydk::YLeaf cdcvfilecurrentsize; //type: uint32
        ydk::YLeaf cdcvfileformat; //type: CdcFileFormat
        ydk::YLeaf cdcvfilecollectmode; //type: CdcVFileCollectMode
        ydk::YLeaf cdcvfilecollectionperiod; //type: uint32
        ydk::YLeaf cdcvfileretentionperiod; //type: uint32
        ydk::YLeaf cdcvfileadminstatus; //type: CdcVFileAdminStatus
        ydk::YLeaf cdcvfileoperstatus; //type: CdcVFileOperStatus
        ydk::YLeaf cdcvfileerrorcode; //type: CdcVFileErrorCode
        ydk::YLeaf cdcvfilecollectionerrorenable; //type: boolean
        ydk::YLeaf cdcvfilerowstatus; //type: RowStatus
        class CdcVFileCommand;
        class CdcVFileCollectMode;
        class CdcVFileAdminStatus;
        class CdcVFileOperStatus;
        class CdcVFileErrorCode;

}; // CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry


class CISCODATACOLLECTIONMIB::CdcVFileMgmtTable : public ydk::Entity
{
    public:
        CdcVFileMgmtTable();
        ~CdcVFileMgmtTable();

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

        class CdcVFileMgmtEntry; //type: CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry

        ydk::YList cdcvfilemgmtentry;
        
}; // CISCODATACOLLECTIONMIB::CdcVFileMgmtTable


class CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry : public ydk::Entity
{
    public:
        CdcVFileMgmtEntry();
        ~CdcVFileMgmtEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_DATA_COLLECTION_MIB::CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::cdcvfileindex)
        ydk::YLeaf cdcvfileindex;
        ydk::YLeaf cdcvfilemgmtindex; //type: uint32
        ydk::YLeaf cdcvfilemgmtname; //type: string
        ydk::YLeaf cdcvfilemgmttimestamp; //type: string
        ydk::YLeaf cdcvfilemgmttimetolive; //type: uint32
        ydk::YLeaf cdcvfilemgmtcommand; //type: CdcVFileMgmtCommand
        ydk::YLeaf cdcvfilemgmtxferurl; //type: binary
        ydk::YLeaf cdcvfilemgmtlastxferstatus; //type: CdcFileXferStatus
        ydk::YLeaf cdcvfilemgmtlastxferurl; //type: binary
        class CdcVFileMgmtCommand;

}; // CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry


class CISCODATACOLLECTIONMIB::CdcDGTable : public ydk::Entity
{
    public:
        CdcDGTable();
        ~CdcDGTable();

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

        class CdcDGEntry; //type: CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry

        ydk::YList cdcdgentry;
        
}; // CISCODATACOLLECTIONMIB::CdcDGTable


class CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry : public ydk::Entity
{
    public:
        CdcDGEntry();
        ~CdcDGEntry();

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

        ydk::YLeaf cdcdgindex; //type: uint32
        ydk::YLeaf cdcdgcomment; //type: string
        ydk::YLeaf cdcdgtype; //type: CdcDGType
        ydk::YLeaf cdcdgvfileindex; //type: uint32
        ydk::YLeaf cdcdgtargettag; //type: string
        ydk::YLeaf cdcdgcontextname; //type: string
        ydk::YLeaf cdcdgobject; //type: string
        ydk::YLeaf cdcdgobjectgrpindex; //type: uint32
        ydk::YLeaf cdcdginstgrpindex; //type: uint32
        ydk::YLeaf cdcdgpollperiod; //type: uint32
        ydk::YLeaf cdcdgrowstatus; //type: RowStatus
        class CdcDGType;

}; // CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry


class CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable : public ydk::Entity
{
    public:
        CdcDGBaseObjectTable();
        ~CdcDGBaseObjectTable();

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

        class CdcDGBaseObjectEntry; //type: CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry

        ydk::YList cdcdgbaseobjectentry;
        
}; // CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable


class CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry : public ydk::Entity
{
    public:
        CdcDGBaseObjectEntry();
        ~CdcDGBaseObjectEntry();

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

        ydk::YLeaf cdcdgbaseobjectgrpindex; //type: uint32
        ydk::YLeaf cdcdgbaseobjectindex; //type: uint32
        ydk::YLeaf cdcdgbaseobjectsubtree; //type: string
        ydk::YLeaf cdcdgbaseobjectlist; //type: binary
        ydk::YLeaf cdcdgbaseobjectrowstatus; //type: RowStatus

}; // CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry


class CISCODATACOLLECTIONMIB::CdcDGInstanceTable : public ydk::Entity
{
    public:
        CdcDGInstanceTable();
        ~CdcDGInstanceTable();

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

        class CdcDGInstanceEntry; //type: CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry

        ydk::YList cdcdginstanceentry;
        
}; // CISCODATACOLLECTIONMIB::CdcDGInstanceTable


class CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry : public ydk::Entity
{
    public:
        CdcDGInstanceEntry();
        ~CdcDGInstanceEntry();

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

        ydk::YLeaf cdcdginstancegrpindex; //type: uint32
        ydk::YLeaf cdcdginstanceindex; //type: uint32
        ydk::YLeaf cdcdginstancetype; //type: CdcDGInstanceType
        ydk::YLeaf cdcdginstanceoid; //type: string
        ydk::YLeaf cdcdginstanceoidend; //type: string
        ydk::YLeaf cdcdginstancenumrepititions; //type: uint32
        ydk::YLeaf cdcdginstanceotherptr; //type: string
        ydk::YLeaf cdcdginstancerowstatus; //type: RowStatus
        class CdcDGInstanceType;

}; // CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry


class CISCODATACOLLECTIONMIB::CdcFileXferConfTable : public ydk::Entity
{
    public:
        CdcFileXferConfTable();
        ~CdcFileXferConfTable();

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

        class CdcFileXferConfEntry; //type: CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry

        ydk::YList cdcfilexferconfentry;
        
}; // CISCODATACOLLECTIONMIB::CdcFileXferConfTable


class CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry : public ydk::Entity
{
    public:
        CdcFileXferConfEntry();
        ~CdcFileXferConfEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_DATA_COLLECTION_MIB::CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::cdcvfileindex)
        ydk::YLeaf cdcvfileindex;
        ydk::YLeaf cdcfilexferconfpriurl; //type: binary
        ydk::YLeaf cdcfilexferconfsecurl; //type: binary
        ydk::YLeaf cdcfilexferconfretryperiod; //type: uint32
        ydk::YLeaf cdcfilexferconfretrycount; //type: uint32
        ydk::YLeaf cdcfilexferconfsuccessenable; //type: boolean
        ydk::YLeaf cdcfilexferconffailureenable; //type: boolean

}; // CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry

class CdcFileXferStatus : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "notStarted") return 1;
            if (name == "success") return 2;
            if (name == "aborted") return 3;
            if (name == "fileOpenFailRemote") return 4;
            if (name == "badDomainName") return 5;
            if (name == "unreachableIpAddress") return 6;
            if (name == "networkFailed") return 7;
            if (name == "fileWriteFailed") return 8;
            if (name == "authFailed") return 9;
            return -1;
        }
};

class CdcFileFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cdcBulkASCII;
        static const ydk::Enum::YLeaf cdcBulkBinary;
        static const ydk::Enum::YLeaf cdcSchemaASCII;

        static int get_enum_value(const std::string & name) {
            if (name == "cdcBulkASCII") return 1;
            if (name == "cdcBulkBinary") return 2;
            if (name == "cdcSchemaASCII") return 3;
            return -1;
        }
};

class CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileCommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf swapToNewFile;
        static const ydk::Enum::YLeaf collectNow;

        static int get_enum_value(const std::string & name) {
            if (name == "idle") return 1;
            if (name == "swapToNewFile") return 2;
            if (name == "collectNow") return 3;
            return -1;
        }
};

class CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileCollectMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf manual;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 1;
            if (name == "manual") return 2;
            return -1;
        }
};

class CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf error;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            if (name == "error") return 3;
            return -1;
        }
};

class CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileErrorCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noError;
        static const ydk::Enum::YLeaf otherError;
        static const ydk::Enum::YLeaf noSpace;
        static const ydk::Enum::YLeaf openError;
        static const ydk::Enum::YLeaf tooSmallMaxSize;
        static const ydk::Enum::YLeaf tooManyMaxSizeHits;
        static const ydk::Enum::YLeaf noResource;

        static int get_enum_value(const std::string & name) {
            if (name == "noError") return 1;
            if (name == "otherError") return 2;
            if (name == "noSpace") return 3;
            if (name == "openError") return 4;
            if (name == "tooSmallMaxSize") return 5;
            if (name == "tooManyMaxSizeHits") return 6;
            if (name == "noResource") return 7;
            return -1;
        }
};

class CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::CdcVFileMgmtCommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf transfer;
        static const ydk::Enum::YLeaf abortTransfer;

        static int get_enum_value(const std::string & name) {
            if (name == "idle") return 1;
            if (name == "delete") return 2;
            if (name == "transfer") return 3;
            if (name == "abortTransfer") return 4;
            return -1;
        }
};

class CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::CdcDGType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf object;
        static const ydk::Enum::YLeaf table;

        static int get_enum_value(const std::string & name) {
            if (name == "object") return 1;
            if (name == "table") return 2;
            return -1;
        }
};

class CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::CdcDGInstanceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf individual;
        static const ydk::Enum::YLeaf range;
        static const ydk::Enum::YLeaf repititions;
        static const ydk::Enum::YLeaf subTree;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "individual") return 1;
            if (name == "range") return 2;
            if (name == "repititions") return 3;
            if (name == "subTree") return 4;
            if (name == "other") return 5;
            return -1;
        }
};


}
}

#endif /* _CISCO_DATA_COLLECTION_MIB_ */

