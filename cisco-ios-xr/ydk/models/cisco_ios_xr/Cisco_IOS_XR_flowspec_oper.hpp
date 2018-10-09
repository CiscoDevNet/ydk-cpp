#ifndef _CISCO_IOS_XR_FLOWSPEC_OPER_
#define _CISCO_IOS_XR_FLOWSPEC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_flowspec_oper {

class FlowSpec : public ydk::Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

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

        class Clients; //type: FlowSpec::Clients
        class Summary; //type: FlowSpec::Summary
        class Vrfs; //type: FlowSpec::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Clients> clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Vrfs> vrfs;
        
}; // FlowSpec


class FlowSpec::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

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

        class Client; //type: FlowSpec::Clients::Client

        ydk::YList client;
        
}; // FlowSpec::Clients


class FlowSpec::Clients::Client : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf client_type; //type: FsClient
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf client_state; //type: FsMgrClientState
        ydk::YLeaf client_flows; //type: uint32

}; // FlowSpec::Clients::Client


class FlowSpec::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf vrfafi_tables; //type: uint32
        ydk::YLeaf flows; //type: uint32

}; // FlowSpec::Summary


class FlowSpec::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: FlowSpec::Vrfs::Vrf

        ydk::YList vrf;
        
}; // FlowSpec::Vrfs


class FlowSpec::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf vrf_name; //type: string
        class Afs; //type: FlowSpec::Vrfs::Vrf::Afs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Vrfs::Vrf::Afs> afs;
        
}; // FlowSpec::Vrfs::Vrf


class FlowSpec::Vrfs::Vrf::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: FlowSpec::Vrfs::Vrf::Afs::Af

        ydk::YList af;
        
}; // FlowSpec::Vrfs::Vrf::Afs


class FlowSpec::Vrfs::Vrf::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: string
        class TableSummary; //type: FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary
        class Nlris; //type: FlowSpec::Vrfs::Vrf::Afs::Af::Nlris
        class Flows; //type: FlowSpec::Vrfs::Vrf::Afs::Af::Flows

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary> table_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Vrfs::Vrf::Afs::Af::Nlris> nlris;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Vrfs::Vrf::Afs::Af::Flows> flows;
        
}; // FlowSpec::Vrfs::Vrf::Afs::Af


class FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary : public ydk::Entity
{
    public:
        TableSummary();
        ~TableSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_flows; //type: uint32
        ydk::YLeaf service_policies; //type: uint32
        ydk::YLeaf local_install_enabled; //type: boolean

}; // FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary


class FlowSpec::Vrfs::Vrf::Afs::Af::Nlris : public ydk::Entity
{
    public:
        Nlris();
        ~Nlris();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nlri; //type: FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri

        ydk::YList nlri;
        
}; // FlowSpec::Vrfs::Vrf::Afs::Af::Nlris


class FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri : public ydk::Entity
{
    public:
        Nlri();
        ~Nlri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nlri_bytes; //type: string
        class FlowStatistics; //type: FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics> flow_statistics;
        
}; // FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri


class FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics : public ydk::Entity
{
    public:
        FlowStatistics();
        ~FlowStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Classified; //type: FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified
        class Dropped; //type: FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified> classified;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped> dropped;
        
}; // FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics


class FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified : public ydk::Entity
{
    public:
        Classified();
        ~Classified();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified


class FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped : public ydk::Entity
{
    public:
        Dropped();
        ~Dropped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped


class FlowSpec::Vrfs::Vrf::Afs::Af::Flows : public ydk::Entity
{
    public:
        Flows();
        ~Flows();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow

        ydk::YList flow;
        
}; // FlowSpec::Vrfs::Vrf::Afs::Af::Flows


class FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_notation; //type: string
        class FlowStatistics; //type: FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics> flow_statistics;
        
}; // FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow


class FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics : public ydk::Entity
{
    public:
        FlowStatistics();
        ~FlowStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Classified; //type: FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified
        class Dropped; //type: FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified> classified;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_flowspec_oper::FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped> dropped;
        
}; // FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics


class FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified : public ydk::Entity
{
    public:
        Classified();
        ~Classified();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified


class FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped : public ydk::Entity
{
    public:
        Dropped();
        ~Dropped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64

}; // FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped

class FsClient : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf one_pk;
        static const ydk::Enum::YLeaf policy;
        static const ydk::Enum::YLeaf ha;
        static const ydk::Enum::YLeaf test;

};

class FsMgrClientState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dormant;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf replay;
        static const ydk::Enum::YLeaf unconfigured;

};


}
}

#endif /* _CISCO_IOS_XR_FLOWSPEC_OPER_ */

