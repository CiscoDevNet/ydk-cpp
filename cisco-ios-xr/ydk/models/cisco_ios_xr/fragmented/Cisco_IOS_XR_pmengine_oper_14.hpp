#ifndef _CISCO_IOS_XR_PMENGINE_OPER_14_
#define _CISCO_IOS_XR_PMENGINE_OPER_14_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_13.hpp"
#include "Cisco_IOS_XR_pmengine_oper_7.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer : public ydk::Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer : public ydk::Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q : public ydk::Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin : public ydk::Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords : public ydk::Entity
{
    public:
        UcWords();
        ~UcWords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories : public ydk::Entity
{
    public:
        OtuHour24OtnHistories();
        ~OtuHour24OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuHour24OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory> > otu_hour24otn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory : public ydk::Entity
{
    public:
        OtuHour24OtnHistory();
        ~OtuHour24OtnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class OtuHour24OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances> otu_hour24otn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances : public ydk::Entity
{
    public:
        OtuHour24OtnTimeLineInstances();
        ~OtuHour24OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuHour24OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance> > otu_hour24otn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance : public ydk::Entity
{
    public:
        OtuHour24OtnTimeLineInstance();
        ~OtuHour24OtnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe> uas_ne;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe : public ydk::Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe : public ydk::Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe : public ydk::Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe : public ydk::Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe : public ydk::Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe : public ydk::Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe : public ydk::Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe : public ydk::Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe : public ydk::Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe : public ydk::Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc : public ydk::Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe : public ydk::Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe : public ydk::Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe : public ydk::Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe : public ydk::Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe : public ydk::Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe : public ydk::Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories::OtuHour24OtnHistory::OtuHour24OtnTimeLineInstances::OtuHour24OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories : public ydk::Entity
{
    public:
        OtuHour24PrbsHistories();
        ~OtuHour24PrbsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuHour24PrbsHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory> > otu_hour24prbs_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory : public ydk::Entity
{
    public:
        OtuHour24PrbsHistory();
        ~OtuHour24PrbsHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class OtuHour24PrbsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances> otu_hour24prbs_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances : public ydk::Entity
{
    public:
        OtuHour24PrbsTimeLineInstances();
        ~OtuHour24PrbsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuHour24PrbsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance> > otu_hour24prbs_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance : public ydk::Entity
{
    public:
        OtuHour24PrbsTimeLineInstance();
        ~OtuHour24PrbsTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf ebc; //type: uint64
        ydk::YLeaf found_count; //type: uint32
        ydk::YLeaf lost_count; //type: uint32
        ydk::YLeaf found_at_time; //type: uint64
        ydk::YLeaf lost_at_time; //type: uint64
        ydk::YLeaf conf_patt; //type: PmPrbsPatternEt
        class RcvPatt; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt
        class PrbsStatus; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus> prbs_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt> rcv_patt;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus : public ydk::Entity
{
    public:
        PrbsStatus();
        ~PrbsStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf prbs_status; //type: PmPrbsStatusEt

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::PrbsStatus


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt : public ydk::Entity
{
    public:
        RcvPatt();
        ~RcvPatt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf rcv_patt; //type: PmPrbsPatternEt

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories::OtuHour24PrbsHistory::OtuHour24PrbsTimeLineInstances::OtuHour24PrbsTimeLineInstance::RcvPatt


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History : public ydk::Entity
{
    public:
        OtuMinute15History();
        ~OtuMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15FecHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories
        class OtuMinute15PrbsHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories
        class OtuMinute15OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories> otu_minute15fec_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories> otu_minute15otn_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories> otu_minute15prbs_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories : public ydk::Entity
{
    public:
        OtuMinute15FecHistories();
        ~OtuMinute15FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15FecHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory> > otu_minute15fec_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory : public ydk::Entity
{
    public:
        OtuMinute15FecHistory();
        ~OtuMinute15FecHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class OtuMinute15FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances> otu_minute15fec_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances : public ydk::Entity
{
    public:
        OtuMinute15FecTimeLineInstances();
        ~OtuMinute15FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance> > otu_minute15fec_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance : public ydk::Entity
{
    public:
        OtuMinute15FecTimeLineInstance();
        ~OtuMinute15FecTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin> qmargin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords> uc_words;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits : public ydk::Entity
{
    public:
        EcBits();
        ~EcBits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer : public ydk::Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer : public ydk::Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q : public ydk::Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin : public ydk::Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords : public ydk::Entity
{
    public:
        UcWords();
        ~UcWords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15FecHistories::OtuMinute15FecHistory::OtuMinute15FecTimeLineInstances::OtuMinute15FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories : public ydk::Entity
{
    public:
        OtuMinute15OtnHistories();
        ~OtuMinute15OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory> > otu_minute15otn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory : public ydk::Entity
{
    public:
        OtuMinute15OtnHistory();
        ~OtuMinute15OtnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class OtuMinute15OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances> otu_minute15otn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances : public ydk::Entity
{
    public:
        OtuMinute15OtnTimeLineInstances();
        ~OtuMinute15OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance> > otu_minute15otn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance : public ydk::Entity
{
    public:
        OtuMinute15OtnTimeLineInstance();
        ~OtuMinute15OtnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe> uas_ne;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe : public ydk::Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe : public ydk::Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe : public ydk::Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe : public ydk::Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe : public ydk::Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe : public ydk::Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe : public ydk::Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe : public ydk::Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe : public ydk::Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe : public ydk::Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc : public ydk::Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe : public ydk::Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe : public ydk::Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe : public ydk::Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe : public ydk::Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe : public ydk::Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe : public ydk::Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15OtnHistories::OtuMinute15OtnHistory::OtuMinute15OtnTimeLineInstances::OtuMinute15OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories : public ydk::Entity
{
    public:
        OtuMinute15PrbsHistories();
        ~OtuMinute15PrbsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15PrbsHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory> > otu_minute15prbs_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory : public ydk::Entity
{
    public:
        OtuMinute15PrbsHistory();
        ~OtuMinute15PrbsHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class OtuMinute15PrbsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances> otu_minute15prbs_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances : public ydk::Entity
{
    public:
        OtuMinute15PrbsTimeLineInstances();
        ~OtuMinute15PrbsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15PrbsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance> > otu_minute15prbs_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance : public ydk::Entity
{
    public:
        OtuMinute15PrbsTimeLineInstance();
        ~OtuMinute15PrbsTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf ebc; //type: uint64
        ydk::YLeaf found_count; //type: uint32
        ydk::YLeaf lost_count; //type: uint32
        ydk::YLeaf found_at_time; //type: uint64
        ydk::YLeaf lost_at_time; //type: uint64
        ydk::YLeaf conf_patt; //type: PmPrbsPatternEt
        class RcvPatt; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt
        class PrbsStatus; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus> prbs_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt> rcv_patt;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus : public ydk::Entity
{
    public:
        PrbsStatus();
        ~PrbsStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf prbs_status; //type: PmPrbsStatusEt

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::PrbsStatus


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt : public ydk::Entity
{
    public:
        RcvPatt();
        ~RcvPatt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf rcv_patt; //type: PmPrbsPatternEt

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History::OtuMinute15PrbsHistories::OtuMinute15PrbsHistory::OtuMinute15PrbsTimeLineInstances::OtuMinute15PrbsTimeLineInstance::RcvPatt


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History : public ydk::Entity
{
    public:
        OtuSecond30History();
        ~OtuSecond30History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30FecHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories
        class OtuSecond30OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories> otu_second30fec_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories> otu_second30otn_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories : public ydk::Entity
{
    public:
        OtuSecond30FecHistories();
        ~OtuSecond30FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30FecHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory> > otu_second30fec_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory : public ydk::Entity
{
    public:
        OtuSecond30FecHistory();
        ~OtuSecond30FecHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class OtuSecond30FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances> otu_second30fec_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances : public ydk::Entity
{
    public:
        OtuSecond30FecTimeLineInstances();
        ~OtuSecond30FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance> > otu_second30fec_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance : public ydk::Entity
{
    public:
        OtuSecond30FecTimeLineInstance();
        ~OtuSecond30FecTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin> qmargin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords> uc_words;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits : public ydk::Entity
{
    public:
        EcBits();
        ~EcBits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer : public ydk::Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer : public ydk::Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q : public ydk::Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin : public ydk::Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords : public ydk::Entity
{
    public:
        UcWords();
        ~UcWords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30FecHistories::OtuSecond30FecHistory::OtuSecond30FecTimeLineInstances::OtuSecond30FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories : public ydk::Entity
{
    public:
        OtuSecond30OtnHistories();
        ~OtuSecond30OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory> > otu_second30otn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory : public ydk::Entity
{
    public:
        OtuSecond30OtnHistory();
        ~OtuSecond30OtnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class OtuSecond30OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances> otu_second30otn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances : public ydk::Entity
{
    public:
        OtuSecond30OtnTimeLineInstances();
        ~OtuSecond30OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance> > otu_second30otn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance : public ydk::Entity
{
    public:
        OtuSecond30OtnTimeLineInstance();
        ~OtuSecond30OtnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe> uas_ne;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe : public ydk::Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe : public ydk::Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe : public ydk::Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe : public ydk::Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe : public ydk::Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe : public ydk::Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe : public ydk::Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe : public ydk::Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe : public ydk::Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe : public ydk::Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc : public ydk::Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe : public ydk::Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe : public ydk::Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe : public ydk::Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe : public ydk::Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe : public ydk::Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe : public ydk::Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History::OtuSecond30OtnHistories::OtuSecond30OtnHistory::OtuSecond30OtnTimeLineInstances::OtuSecond30OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::SonetHistory : public ydk::Entity
{
    public:
        SonetHistory();
        ~SonetHistory();

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

        class SonetPortHistories; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories> sonet_port_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories : public ydk::Entity
{
    public:
        SonetPortHistories();
        ~SonetPortHistories();

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

        class SonetPortHistory; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory> > sonet_port_history;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory : public ydk::Entity
{
    public:
        SonetPortHistory();
        ~SonetPortHistory();

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
        class SonetMinute15History; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History
        class SonetHour24History; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History> sonet_hour24_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History> sonet_minute15_history;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History : public ydk::Entity
{
    public:
        SonetHour24History();
        ~SonetHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24PathHistories; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories
        class SonetHour24OcnHistories; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories> sonet_hour24_path_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories> sonet_hour24ocn_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories : public ydk::Entity
{
    public:
        SonetHour24OcnHistories();
        ~SonetHour24OcnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24OcnHistory; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory> > sonet_hour24ocn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory : public ydk::Entity
{
    public:
        SonetHour24OcnHistory();
        ~SonetHour24OcnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class SonetHour24OcnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances> sonet_hour24ocn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances : public ydk::Entity
{
    public:
        SonetHour24OcnTimeLineInstances();
        ~SonetHour24OcnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24OcnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance> > sonet_hour24ocn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance : public ydk::Entity
{
    public:
        SonetHour24OcnTimeLineInstance();
        ~SonetHour24OcnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Section; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section
        class Line; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line
        class FeLine; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine> fe_line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section> section;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine : public ydk::Entity
{
    public:
        FeLine();
        ~FeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs : public ydk::Entity
{
    public:
        FarEndLineCVs();
        ~FarEndLineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs : public ydk::Entity
{
    public:
        FarEndLineESs();
        ~FarEndLineESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs : public ydk::Entity
{
    public:
        FarEndLineFcLs();
        ~FarEndLineFcLs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineFcLs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs : public ydk::Entity
{
    public:
        FarEndLineSeSs();
        ~FarEndLineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs : public ydk::Entity
{
    public:
        FarEndLineUaSs();
        ~FarEndLineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line_status; //type: int32
        class LineESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs
        class LineSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs
        class LineCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs
        class LineUaSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs> line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs> line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs : public ydk::Entity
{
    public:
        LineCVs();
        ~LineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs : public ydk::Entity
{
    public:
        LineESs();
        ~LineESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs : public ydk::Entity
{
    public:
        LineFcLs();
        ~LineFcLs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineFcLs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs : public ydk::Entity
{
    public:
        LineSeSs();
        ~LineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs : public ydk::Entity
{
    public:
        LineUaSs();
        ~LineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Line::LineUaSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section : public ydk::Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf section_status; //type: int32
        class SectionESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs> section_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs> section_sef_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs : public ydk::Entity
{
    public:
        SectionCVs();
        ~SectionCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs : public ydk::Entity
{
    public:
        SectionESs();
        ~SectionESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs : public ydk::Entity
{
    public:
        SectionSeSs();
        ~SectionSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs : public ydk::Entity
{
    public:
        SectionSefSs();
        ~SectionSefSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24OcnHistories::SonetHour24OcnHistory::SonetHour24OcnTimeLineInstances::SonetHour24OcnTimeLineInstance::Section::SectionSefSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories : public ydk::Entity
{
    public:
        SonetHour24PathHistories();
        ~SonetHour24PathHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24PathHistory; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory> > sonet_hour24_path_history;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory : public ydk::Entity
{
    public:
        SonetHour24PathHistory();
        ~SonetHour24PathHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class SonetHour24PathTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances> sonet_hour24_path_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances : public ydk::Entity
{
    public:
        SonetHour24PathTimeLineInstances();
        ~SonetHour24PathTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24PathTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance> > sonet_hour24_path_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance : public ydk::Entity
{
    public:
        SonetHour24PathTimeLineInstance();
        ~SonetHour24PathTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Path; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path
        class FePath; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath> fe_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path> path;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath : public ydk::Entity
{
    public:
        FePath();
        ~FePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf far_end_path_e_ss; //type: uint32
        ydk::YLeaf far_end_path_se_ss; //type: uint32
        ydk::YLeaf far_end_path_c_vs; //type: uint32
        ydk::YLeaf far_end_path_ua_ss; //type: uint32

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_width; //type: PmSonetPathWidthEnum
        ydk::YLeaf path_status; //type: int32
        class PathESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs
        class PathSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs
        class PathCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs
        class PathUaSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs : public ydk::Entity
{
    public:
        PathCVs();
        ~PathCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs : public ydk::Entity
{
    public:
        PathESs();
        ~PathESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs : public ydk::Entity
{
    public:
        PathSeSs();
        ~PathSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs : public ydk::Entity
{
    public:
        PathUaSs();
        ~PathUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History : public ydk::Entity
{
    public:
        SonetMinute15History();
        ~SonetMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15OcnHistories; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories
        class SonetMinute15PathHistories; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories> sonet_minute15_path_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories> sonet_minute15ocn_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories : public ydk::Entity
{
    public:
        SonetMinute15OcnHistories();
        ~SonetMinute15OcnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15OcnHistory; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory> > sonet_minute15ocn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory : public ydk::Entity
{
    public:
        SonetMinute15OcnHistory();
        ~SonetMinute15OcnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class SonetMinute15OcnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances> sonet_minute15ocn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances : public ydk::Entity
{
    public:
        SonetMinute15OcnTimeLineInstances();
        ~SonetMinute15OcnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15OcnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance> > sonet_minute15ocn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance : public ydk::Entity
{
    public:
        SonetMinute15OcnTimeLineInstance();
        ~SonetMinute15OcnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Section; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section
        class Line; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line
        class FeLine; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine> fe_line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section> section;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine : public ydk::Entity
{
    public:
        FeLine();
        ~FeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs : public ydk::Entity
{
    public:
        FarEndLineCVs();
        ~FarEndLineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs : public ydk::Entity
{
    public:
        FarEndLineESs();
        ~FarEndLineESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs : public ydk::Entity
{
    public:
        FarEndLineFcLs();
        ~FarEndLineFcLs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineFcLs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs : public ydk::Entity
{
    public:
        FarEndLineSeSs();
        ~FarEndLineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs : public ydk::Entity
{
    public:
        FarEndLineUaSs();
        ~FarEndLineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line_status; //type: int32
        class LineESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs
        class LineSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs
        class LineCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs
        class LineUaSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs> line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs> line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs : public ydk::Entity
{
    public:
        LineCVs();
        ~LineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineCVs


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_14_ */

