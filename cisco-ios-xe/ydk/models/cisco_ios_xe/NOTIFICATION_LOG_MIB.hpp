#ifndef _NOTIFICATION_LOG_MIB_
#define _NOTIFICATION_LOG_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace NOTIFICATION_LOG_MIB {

class NOTIFICATIONLOGMIB : public ydk::Entity
{
    public:
        NOTIFICATIONLOGMIB();
        ~NOTIFICATIONLOGMIB();

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

        class NlmConfig; //type: NOTIFICATIONLOGMIB::NlmConfig
        class NlmStats; //type: NOTIFICATIONLOGMIB::NlmStats
        class NlmConfigLogTable; //type: NOTIFICATIONLOGMIB::NlmConfigLogTable
        class NlmLogTable; //type: NOTIFICATIONLOGMIB::NlmLogTable
        class NlmLogVariableTable; //type: NOTIFICATIONLOGMIB::NlmLogVariableTable

        std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::NlmConfig> nlmconfig;
        std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::NlmStats> nlmstats;
        std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::NlmConfigLogTable> nlmconfiglogtable;
        std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::NlmLogTable> nlmlogtable;
        std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::NlmLogVariableTable> nlmlogvariabletable;
        
}; // NOTIFICATIONLOGMIB


class NOTIFICATIONLOGMIB::NlmConfig : public ydk::Entity
{
    public:
        NlmConfig();
        ~NlmConfig();

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

        ydk::YLeaf nlmconfigglobalentrylimit; //type: uint32
        ydk::YLeaf nlmconfigglobalageout; //type: uint32

}; // NOTIFICATIONLOGMIB::NlmConfig


class NOTIFICATIONLOGMIB::NlmStats : public ydk::Entity
{
    public:
        NlmStats();
        ~NlmStats();

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

        ydk::YLeaf nlmstatsglobalnotificationslogged; //type: uint32
        ydk::YLeaf nlmstatsglobalnotificationsbumped; //type: uint32

}; // NOTIFICATIONLOGMIB::NlmStats


class NOTIFICATIONLOGMIB::NlmConfigLogTable : public ydk::Entity
{
    public:
        NlmConfigLogTable();
        ~NlmConfigLogTable();

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

        class NlmConfigLogEntry; //type: NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry

        ydk::YList nlmconfiglogentry;
        
}; // NOTIFICATIONLOGMIB::NlmConfigLogTable


class NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry : public ydk::Entity
{
    public:
        NlmConfigLogEntry();
        ~NlmConfigLogEntry();

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

        ydk::YLeaf nlmlogname; //type: string
        ydk::YLeaf nlmconfiglogfiltername; //type: string
        ydk::YLeaf nlmconfiglogentrylimit; //type: uint32
        ydk::YLeaf nlmconfiglogadminstatus; //type: NlmConfigLogAdminStatus
        ydk::YLeaf nlmconfiglogoperstatus; //type: NlmConfigLogOperStatus
        ydk::YLeaf nlmconfiglogstoragetype; //type: StorageType
        ydk::YLeaf nlmconfiglogentrystatus; //type: RowStatus
        ydk::YLeaf nlmstatslognotificationslogged; //type: uint32
        ydk::YLeaf nlmstatslognotificationsbumped; //type: uint32
        class NlmConfigLogAdminStatus;
        class NlmConfigLogOperStatus;

}; // NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry


class NOTIFICATIONLOGMIB::NlmLogTable : public ydk::Entity
{
    public:
        NlmLogTable();
        ~NlmLogTable();

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

        class NlmLogEntry; //type: NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry

        ydk::YList nlmlogentry;
        
}; // NOTIFICATIONLOGMIB::NlmLogTable


class NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry : public ydk::Entity
{
    public:
        NlmLogEntry();
        ~NlmLogEntry();

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

        //type: string (refers to cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::nlmlogname)
        ydk::YLeaf nlmlogname;
        ydk::YLeaf nlmlogindex; //type: uint32
        ydk::YLeaf nlmlogtime; //type: uint32
        ydk::YLeaf nlmlogdateandtime; //type: string
        ydk::YLeaf nlmlogengineid; //type: binary
        ydk::YLeaf nlmlogenginetaddress; //type: binary
        ydk::YLeaf nlmlogenginetdomain; //type: string
        ydk::YLeaf nlmlogcontextengineid; //type: binary
        ydk::YLeaf nlmlogcontextname; //type: string
        ydk::YLeaf nlmlognotificationid; //type: string

}; // NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry


class NOTIFICATIONLOGMIB::NlmLogVariableTable : public ydk::Entity
{
    public:
        NlmLogVariableTable();
        ~NlmLogVariableTable();

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

        class NlmLogVariableEntry; //type: NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry

        ydk::YList nlmlogvariableentry;
        
}; // NOTIFICATIONLOGMIB::NlmLogVariableTable


class NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry : public ydk::Entity
{
    public:
        NlmLogVariableEntry();
        ~NlmLogVariableEntry();

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

        //type: string (refers to cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::nlmlogname)
        ydk::YLeaf nlmlogname;
        //type: uint32 (refers to cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::nlmlogindex)
        ydk::YLeaf nlmlogindex;
        ydk::YLeaf nlmlogvariableindex; //type: uint32
        ydk::YLeaf nlmlogvariableid; //type: string
        ydk::YLeaf nlmlogvariablevaluetype; //type: NlmLogVariableValueType
        ydk::YLeaf nlmlogvariablecounter32val; //type: uint32
        ydk::YLeaf nlmlogvariableunsigned32val; //type: uint32
        ydk::YLeaf nlmlogvariabletimeticksval; //type: uint32
        ydk::YLeaf nlmlogvariableinteger32val; //type: int32
        ydk::YLeaf nlmlogvariableoctetstringval; //type: binary
        ydk::YLeaf nlmlogvariableipaddressval; //type: string
        ydk::YLeaf nlmlogvariableoidval; //type: string
        ydk::YLeaf nlmlogvariablecounter64val; //type: uint64
        ydk::YLeaf nlmlogvariableopaqueval; //type: binary
        class NlmLogVariableValueType;

}; // NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry

class NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::NlmConfigLogAdminStatus : public ydk::Enum
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

class NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::NlmConfigLogOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf noFilter;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "operational") return 2;
            if (name == "noFilter") return 3;
            return -1;
        }
};

class NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::NlmLogVariableValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf counter32;
        static const ydk::Enum::YLeaf unsigned32;
        static const ydk::Enum::YLeaf timeTicks;
        static const ydk::Enum::YLeaf integer32;
        static const ydk::Enum::YLeaf ipAddress;
        static const ydk::Enum::YLeaf octetString;
        static const ydk::Enum::YLeaf objectId;
        static const ydk::Enum::YLeaf counter64;
        static const ydk::Enum::YLeaf opaque;

        static int get_enum_value(const std::string & name) {
            if (name == "counter32") return 1;
            if (name == "unsigned32") return 2;
            if (name == "timeTicks") return 3;
            if (name == "integer32") return 4;
            if (name == "ipAddress") return 5;
            if (name == "octetString") return 6;
            if (name == "objectId") return 7;
            if (name == "counter64") return 8;
            if (name == "opaque") return 9;
            return -1;
        }
};


}
}

#endif /* _NOTIFICATION_LOG_MIB_ */

