#ifndef _SNMP_NOTIFICATION_MIB_
#define _SNMP_NOTIFICATION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace SNMP_NOTIFICATION_MIB {

class SNMPNOTIFICATIONMIB : public ydk::Entity
{
    public:
        SNMPNOTIFICATIONMIB();
        ~SNMPNOTIFICATIONMIB();

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

        class SnmpNotifyTable; //type: SNMPNOTIFICATIONMIB::SnmpNotifyTable
        class SnmpNotifyFilterProfileTable; //type: SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable
        class SnmpNotifyFilterTable; //type: SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable

        std::shared_ptr<cisco_ios_xr::SNMP_NOTIFICATION_MIB::SNMPNOTIFICATIONMIB::SnmpNotifyTable> snmpnotifytable;
        std::shared_ptr<cisco_ios_xr::SNMP_NOTIFICATION_MIB::SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable> snmpnotifyfilterprofiletable; // presence node
        std::shared_ptr<cisco_ios_xr::SNMP_NOTIFICATION_MIB::SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable> snmpnotifyfiltertable; // presence node
        
}; // SNMPNOTIFICATIONMIB


class SNMPNOTIFICATIONMIB::SnmpNotifyTable : public ydk::Entity
{
    public:
        SnmpNotifyTable();
        ~SnmpNotifyTable();

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

        class SnmpNotifyEntry; //type: SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry

        ydk::YList snmpnotifyentry;
        
}; // SNMPNOTIFICATIONMIB::SnmpNotifyTable


class SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry : public ydk::Entity
{
    public:
        SnmpNotifyEntry();
        ~SnmpNotifyEntry();

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

        ydk::YLeaf snmpnotifyname; //type: string
        ydk::YLeaf snmpnotifytag; //type: string
        ydk::YLeaf snmpnotifytype; //type: SnmpNotifyTypeType
        ydk::YLeaf snmpnotifystoragetype; //type: StorageType

}; // SNMPNOTIFICATIONMIB::SnmpNotifyTable::SnmpNotifyEntry


class SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable : public ydk::Entity
{
    public:
        SnmpNotifyFilterProfileTable();
        ~SnmpNotifyFilterProfileTable();

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

        class SnmpNotifyFilterProfileEntry; //type: SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry

        ydk::YList snmpnotifyfilterprofileentry;
        
}; // SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable


class SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry : public ydk::Entity
{
    public:
        SnmpNotifyFilterProfileEntry();
        ~SnmpNotifyFilterProfileEntry();

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

        ydk::YLeaf snmptargetparamsname; //type: string
        ydk::YLeaf snmpnotifyfilterprofilename; //type: string
        ydk::YLeaf snmpnotifyfilterprofilestortype; //type: StorageType

}; // SNMPNOTIFICATIONMIB::SnmpNotifyFilterProfileTable::SnmpNotifyFilterProfileEntry


class SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable : public ydk::Entity
{
    public:
        SnmpNotifyFilterTable();
        ~SnmpNotifyFilterTable();

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

        class SnmpNotifyFilterEntry; //type: SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry

        ydk::YList snmpnotifyfilterentry;
        
}; // SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable


class SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry : public ydk::Entity
{
    public:
        SnmpNotifyFilterEntry();
        ~SnmpNotifyFilterEntry();

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

        ydk::YLeaf snmpnotifyfilterprofilename; //type: string
        ydk::YLeaf snmpnotifyfiltersubtree; //type: string
        ydk::YLeaf snmpnotifyfiltermask; //type: string
        ydk::YLeaf snmpnotifyfiltertype; //type: SnmpNotifyFilterTypeType
        ydk::YLeaf snmpnotifyfilterstoragetype; //type: StorageType

}; // SNMPNOTIFICATIONMIB::SnmpNotifyFilterTable::SnmpNotifyFilterEntry

class SnmpNotifyTypeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trap;
        static const ydk::Enum::YLeaf inform;

};

class SnmpNotifyFilterTypeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf included;
        static const ydk::Enum::YLeaf excluded;

};


}
}

#endif /* _SNMP_NOTIFICATION_MIB_ */

