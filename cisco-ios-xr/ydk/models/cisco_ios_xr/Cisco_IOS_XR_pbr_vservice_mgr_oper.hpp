#ifndef _CISCO_IOS_XR_PBR_VSERVICE_MGR_OPER_
#define _CISCO_IOS_XR_PBR_VSERVICE_MGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_pbr_vservice_mgr_oper {

class GlobalServiceFunctionChaining : public Entity
{
    public:
        GlobalServiceFunctionChaining();
        ~GlobalServiceFunctionChaining();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class ServiceFunctionPath; //type: GlobalServiceFunctionChaining::ServiceFunctionPath
        class ServiceFunction; //type: GlobalServiceFunctionChaining::ServiceFunction
        class ServiceFunctionForwarder; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction> service_function;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder> service_function_forwarder;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath> service_function_path;


}; // GlobalServiceFunctionChaining


class GlobalServiceFunctionChaining::ServiceFunctionPath : public Entity
{
    public:
        ServiceFunctionPath();
        ~ServiceFunctionPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathIds; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds> path_ids;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds : public Entity
{
    public:
        PathIds();
        ~PathIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathId; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId> > path_id;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId : public Entity
{
    public:
        PathId();
        ~PathId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: uint32

        class Stats; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats
        class ServiceIndexes; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes> service_indexes;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats> stats;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Detail; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail
        class Summarized; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized> summarized;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr> > si_arr;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf si; //type: uint8

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data> data;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized : public Entity
{
    public:
        Summarized();
        ~Summarized();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr> > si_arr;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf si; //type: uint8

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data> data;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes : public Entity
{
    public:
        ServiceIndexes();
        ~ServiceIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServiceIndex; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex> > service_index;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex : public Entity
{
    public:
        ServiceIndex();
        ~ServiceIndex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr> > si_arr;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf si; //type: uint8

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data> data;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term


class GlobalServiceFunctionChaining::ServiceFunction : public Entity
{
    public:
        ServiceFunction();
        ~ServiceFunction();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SfNames; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames> sf_names;


}; // GlobalServiceFunctionChaining::ServiceFunction


class GlobalServiceFunctionChaining::ServiceFunction::SfNames : public Entity
{
    public:
        SfNames();
        ~SfNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SfName; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName> > sf_name;


}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName : public Entity
{
    public:
        SfName();
        ~SfName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr> > si_arr;


}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Term


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf si; //type: uint8

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data> data;


}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunction::SfNames::SfName::SiArr::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder : public Entity
{
    public:
        ServiceFunctionForwarder();
        ~ServiceFunctionForwarder();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SffNames; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames
        class Local; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local> local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames> sff_names;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames : public Entity
{
    public:
        SffNames();
        ~SffNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SffName; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName> > sff_name;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName : public Entity
{
    public:
        SffName();
        ~SffName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr> > si_arr;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf si; //type: uint8

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data> data;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Error; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error> error;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error : public Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data
        class SiArr; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr> > si_arr;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class Sfp; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp
        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term
        class Sf; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf
        class Sff; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff
        class SffLocal; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Term


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sf


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::Sff


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::Data::SffLocal


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf si; //type: uint8

        class Data; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data> data;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: VsNshStatsEnum

        class SpiSi; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi
        class Term; //type: GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term> term;


}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi


class GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64



}; // GlobalServiceFunctionChaining::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term

class VsNshStatsEnum : public Enum
{
    public:
        static const Enum::YLeaf vs_nsh_stats_spi_si;
        static const Enum::YLeaf vs_nsh_stats_ter_min_ate;
        static const Enum::YLeaf vs_nsh_stats_sf;
        static const Enum::YLeaf vs_nsh_stats_sff;
        static const Enum::YLeaf vs_nsh_stats_sff_local;
        static const Enum::YLeaf vs_nsh_stats_sfp;
        static const Enum::YLeaf vs_nsh_stats_sfp_detail;
        static const Enum::YLeaf vs_nsh_stats_max;

};


}
}

#endif /* _CISCO_IOS_XR_PBR_VSERVICE_MGR_OPER_ */

