#ifndef _CISCO_IOS_XR_SYSADMIN_SHIP_
#define _CISCO_IOS_XR_SYSADMIN_SHIP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_ship {

class Stat : public ydk::Entity
{
    public:
        Stat();
        ~Stat();

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

        class ShipComp; //type: Stat::ShipComp

        ydk::YList ship_comp;
        
}; // Stat


class Stat::ShipComp : public ydk::Entity
{
    public:
        ShipComp();
        ~ShipComp();

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

        ydk::YLeaf comp_name; //type: string
        class Process; //type: Stat::ShipComp::Process

        ydk::YList process;
        
}; // Stat::ShipComp


class Stat::ShipComp::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_name; //type: string
        class Client; //type: Stat::ShipComp::Process::Client

        ydk::YList client;
        
}; // Stat::ShipComp::Process


class Stat::ShipComp::Process::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_name; //type: string
        class Cat; //type: Stat::ShipComp::Process::Client::Cat

        ydk::YList cat;
        
}; // Stat::ShipComp::Process::Client


class Stat::ShipComp::Process::Client::Cat : public ydk::Entity
{
    public:
        Cat();
        ~Cat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cat_name; //type: CatName
        class Counter32b; //type: Stat::ShipComp::Process::Client::Cat::Counter32b

        ydk::YList counter_32b;
                class CatName;

}; // Stat::ShipComp::Process::Client::Cat


class Stat::ShipComp::Process::Client::Cat::Counter32b : public ydk::Entity
{
    public:
        Counter32b();
        ~Counter32b();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_name; //type: string
        ydk::YLeaf counter_value; //type: uint32
        ydk::YLeaf watermark; //type: uint32
        ydk::YLeaf time_stamp; //type: uint64
        ydk::YLeaf hist_info1; //type: uint32
        ydk::YLeaf hist_info2; //type: uint32
        ydk::YLeaf hist_info3; //type: uint32
        ydk::YLeaf hist_info4; //type: uint32
        ydk::YLeaf hist_info5; //type: uint32
        ydk::YLeaf hist_info6; //type: uint32
        ydk::YLeaf hist_info7; //type: uint32
        ydk::YLeaf hist_info8; //type: uint32

}; // Stat::ShipComp::Process::Client::Cat::Counter32b

class Stat::ShipComp::Process::Client::Cat::CatName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SHIP_TRANSPORT_COUNTERS;
        static const ydk::Enum::YLeaf SHIP_SERVER_COUNTERS;
        static const ydk::Enum::YLeaf SHIP_CLIENT_LIB_COUNTERS;
        static const ydk::Enum::YLeaf SHIP_REPLICATION_COUNTERS;
        static const ydk::Enum::YLeaf SHIP_READER_REPLICA_COUNTERS;
        static const ydk::Enum::YLeaf SHIP_WRITER_REPLICA_COUNTERS;
        static const ydk::Enum::YLeaf SHIP_TRANSPORT_COUNTERS_FAILOVER;
        static const ydk::Enum::YLeaf SHIP_SERVER_COUNTERS_FAILOVER;
        static const ydk::Enum::YLeaf SHIP_CLIENT_LIB_COUNTERS_FAILOVER;
        static const ydk::Enum::YLeaf SHIP_REPLICATION_COUNTERS_FAILOVER;
        static const ydk::Enum::YLeaf SHIP_TRANSPORT_ERRORS;
        static const ydk::Enum::YLeaf SHIP_SERVER_ERRORS;
        static const ydk::Enum::YLeaf SHIP_CLIENT_LIB_ERRORS;
        static const ydk::Enum::YLeaf SHIP_REPLICATION_ERRORS;
        static const ydk::Enum::YLeaf SHIP_READER_REPLICA_ERRORS;
        static const ydk::Enum::YLeaf SHIP_WRITER_REPLICA_ERRORS;
        static const ydk::Enum::YLeaf SHIP_TRANSPORT_ERRORS_FAILOVER;
        static const ydk::Enum::YLeaf SHIP_SERVER_ERRORS_FAILOVER;
        static const ydk::Enum::YLeaf SHIP_CLIENT_LIB_ERRORS_FAILOVER;
        static const ydk::Enum::YLeaf SHIP_REPLICATION_ERRORS_FAILOVER;
        static const ydk::Enum::YLeaf FEATURE_MA_COUNTERS;
        static const ydk::Enum::YLeaf FEATURE_MA_COUNTERS_ERRORS;
        static const ydk::Enum::YLeaf FEATURE_MA_COUNTERS_FAILOVER;
        static const ydk::Enum::YLeaf VIRTUAL_INTERFACE_MA_COUNTERS;
        static const ydk::Enum::YLeaf VIRTUAL_INTERFACE_MA_COUNTERS_ERRORS;
        static const ydk::Enum::YLeaf VIRTUAL_INTERFACE_MA_COUNTERS_FAILOVER;
        static const ydk::Enum::YLeaf FEATURE_EA_COUNTERS;
        static const ydk::Enum::YLeaf FEATURE_EA_COUNTERS_ERRORS;
        static const ydk::Enum::YLeaf VIRTUAL_INTERFACE_EA_COUNTERS;
        static const ydk::Enum::YLeaf VIRTUAL_INTERFACE_EA_COUNTERS_ERRORS;
        static const ydk::Enum::YLeaf VIRTUAL_INTERFACE_EA_COUNTERS_FAILOVER;
        static const ydk::Enum::YLeaf SHIP_HISTOGRAM_COUNTERS;
        static const ydk::Enum::YLeaf SHIP_WATERMARK_COUNTERS;
        static const ydk::Enum::YLeaf SHIP_NODE_COUNTERS;

        static int get_enum_value(const std::string & name) {
            if (name == "SHIP_TRANSPORT_COUNTERS") return 0;
            if (name == "SHIP_SERVER_COUNTERS") return 1;
            if (name == "SHIP_CLIENT_LIB_COUNTERS") return 2;
            if (name == "SHIP_REPLICATION_COUNTERS") return 3;
            if (name == "SHIP_READER_REPLICA_COUNTERS") return 4;
            if (name == "SHIP_WRITER_REPLICA_COUNTERS") return 5;
            if (name == "SHIP_TRANSPORT_COUNTERS_FAILOVER") return 6;
            if (name == "SHIP_SERVER_COUNTERS_FAILOVER") return 7;
            if (name == "SHIP_CLIENT_LIB_COUNTERS_FAILOVER") return 8;
            if (name == "SHIP_REPLICATION_COUNTERS_FAILOVER") return 9;
            if (name == "SHIP_TRANSPORT_ERRORS") return 10;
            if (name == "SHIP_SERVER_ERRORS") return 11;
            if (name == "SHIP_CLIENT_LIB_ERRORS") return 12;
            if (name == "SHIP_REPLICATION_ERRORS") return 13;
            if (name == "SHIP_READER_REPLICA_ERRORS") return 14;
            if (name == "SHIP_WRITER_REPLICA_ERRORS") return 15;
            if (name == "SHIP_TRANSPORT_ERRORS_FAILOVER") return 16;
            if (name == "SHIP_SERVER_ERRORS_FAILOVER") return 17;
            if (name == "SHIP_CLIENT_LIB_ERRORS_FAILOVER") return 18;
            if (name == "SHIP_REPLICATION_ERRORS_FAILOVER") return 19;
            if (name == "FEATURE_MA_COUNTERS") return 20;
            if (name == "FEATURE_MA_COUNTERS_ERRORS") return 21;
            if (name == "FEATURE_MA_COUNTERS_FAILOVER") return 22;
            if (name == "VIRTUAL_INTERFACE_MA_COUNTERS") return 23;
            if (name == "VIRTUAL_INTERFACE_MA_COUNTERS_ERRORS") return 24;
            if (name == "VIRTUAL_INTERFACE_MA_COUNTERS_FAILOVER") return 25;
            if (name == "FEATURE_EA_COUNTERS") return 26;
            if (name == "FEATURE_EA_COUNTERS_ERRORS") return 27;
            if (name == "VIRTUAL_INTERFACE_EA_COUNTERS") return 28;
            if (name == "VIRTUAL_INTERFACE_EA_COUNTERS_ERRORS") return 29;
            if (name == "VIRTUAL_INTERFACE_EA_COUNTERS_FAILOVER") return 30;
            if (name == "SHIP_HISTOGRAM_COUNTERS") return 31;
            if (name == "SHIP_WATERMARK_COUNTERS") return 32;
            if (name == "SHIP_NODE_COUNTERS") return 33;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_SHIP_ */

