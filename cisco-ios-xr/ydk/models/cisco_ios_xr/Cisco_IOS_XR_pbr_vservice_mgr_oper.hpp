#ifndef _CISCO_IOS_XR_PBR_VSERVICE_MGR_OPER_
#define _CISCO_IOS_XR_PBR_VSERVICE_MGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pbr_vservice_mgr_oper {

class GlobalServiceFunctionChaining : public ydk::Entity
{
    public:
        GlobalServiceFunctionChaining();
        ~GlobalServiceFunctionChaining();

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

        class ServiceFunctionPath; //type: GlobalServiceFunctionChaining::ServiceFunctionPath
        class ServiceFunction; //type: GlobalServiceFunctionChaining::ServiceFunction
        class ServiceFunctionForwarder; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath> service_function_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction> service_function;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder> service_function_forwarder;
        
}; // GlobalServiceFunctionChaining


class GlobalServiceFunctionChaining::ServiceFunctionPath : public ydk::Entity
{
    public:
        ServiceFunctionPath();
        ~ServiceFunctionPath();

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

        class PathIds; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds> path_ids;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds : public ydk::Entity
{
    public:
        PathIds();
        ~PathIds();

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

        class PathId; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId

        ydk::YList path_id;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId : public ydk::Entity
{
    public:
        PathId();
        ~PathId();

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

        ydk::YLeaf id; //type: uint32
        class Stats; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats
        class ServiceIndexes; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats> stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes> service_indexes;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detail; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail
        class Summarized; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized> summarized;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data> data;
        ydk::YList si_arr;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal> sff_local;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si; //type: uint8
        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data> data;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized : public ydk::Entity
{
    public:
        Summarized();
        ~Summarized();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data> data;
        ydk::YList si_arr;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal> sff_local;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si; //type: uint8
        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data> data;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes : public ydk::Entity
{
    public:
        ServiceIndexes();
        ~ServiceIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServiceIndex; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex

        ydk::YList service_index;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex : public ydk::Entity
{
    public:
        ServiceIndex();
        ~ServiceIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data> data;
        ydk::YList si_arr;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal> sff_local;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si; //type: uint8
        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data> data;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term


class GlobalServiceFunctionChaining::ServiceFunction : public ydk::Entity
{
    public:
        ServiceFunction();
        ~ServiceFunction();

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

        class SfNames; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames> sf_names;
        
}; // GlobalServiceFunctionChaining::ServiceFunction


class GlobalServiceFunctionChaining::ServiceFunction::SfNames : public ydk::Entity
{
    public:
        SfNames();
        ~SfNames();

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

        class SfName; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName

        ydk::YList sf_name;
        
}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName : public ydk::Entity
{
    public:
        SfName();
        ~SfName();

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

        ydk::YLeaf name; //type: string
        class Data; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data> data;
        ydk::YList si_arr;
        
}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal> sff_local;
        
}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si; //type: uint8
        class Data; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data> data;
        
}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder : public ydk::Entity
{
    public:
        ServiceFunctionForwarder();
        ~ServiceFunctionForwarder();

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

        class SffNames; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames
        class Local; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames> sff_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local> local;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames : public ydk::Entity
{
    public:
        SffNames();
        ~SffNames();

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

        class SffName; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName

        ydk::YList sff_name;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName : public ydk::Entity
{
    public:
        SffName();
        ~SffName();

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

        ydk::YLeaf name; //type: string
        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data> data;
        ydk::YList si_arr;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal> sff_local;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si; //type: uint8
        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data> data;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

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

        class Error; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error> error;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data> data;
        ydk::YList si_arr;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

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

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal> sff_local;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

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

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

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

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

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

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

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

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

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

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

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

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

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

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

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

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

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

        ydk::YLeaf si; //type: uint8
        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data> data;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

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

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term> term;
        
}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

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

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

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

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term

class VsNshStats : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vs_nsh_stats_spi_si;
        static const ydk::Enum::YLeaf vs_nsh_stats_ter_min_ate;
        static const ydk::Enum::YLeaf vs_nsh_stats_sf;
        static const ydk::Enum::YLeaf vs_nsh_stats_sff;
        static const ydk::Enum::YLeaf vs_nsh_stats_sff_local;
        static const ydk::Enum::YLeaf vs_nsh_stats_sfp;
        static const ydk::Enum::YLeaf vs_nsh_stats_sfp_detail;
        static const ydk::Enum::YLeaf vs_nsh_stats_max;

        static int get_enum_value(const std::string & name) {
            if (name == "vs-nsh-stats-spi-si") return 0;
            if (name == "vs-nsh-stats-ter-min-ate") return 1;
            if (name == "vs-nsh-stats-sf") return 2;
            if (name == "vs-nsh-stats-sff") return 3;
            if (name == "vs-nsh-stats-sff-local") return 4;
            if (name == "vs-nsh-stats-sfp") return 5;
            if (name == "vs-nsh-stats-sfp-detail") return 6;
            if (name == "vs-nsh-stats-max") return 7;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_PBR_VSERVICE_MGR_OPER_ */

