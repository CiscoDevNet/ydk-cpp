#ifndef _CISCO_IOS_XR_PMENGINE_OPER_6_
#define _CISCO_IOS_XR_PMENGINE_OPER_6_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_0.hpp"
#include "Cisco_IOS_XR_pmengine_oper_5.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns : public ydk::Entity
{
    public:
        OtuHour24Otns();
        ~OtuHour24Otns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuHour24Otn; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn> > otu_hour24otn;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn : public ydk::Entity
{
    public:
        OtuHour24Otn();
        ~OtuHour24Otn();

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
        class Lbc; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc
        class EsNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe
        class EsrNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe
        class SesNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe
        class SesrNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe
        class UasNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe
        class BbeNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe
        class BberNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe
        class FcNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe
        class EsFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe
        class EsrFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe
        class SesFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe
        class SesrFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe
        class UasFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe
        class BbeFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe
        class BberFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe
        class FcFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe> fc_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe> uas_ne;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses : public ydk::Entity
{
    public:
        OtuHour24Prbses();
        ~OtuHour24Prbses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuHour24Prbs; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs> > otu_hour24prbs;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs : public ydk::Entity
{
    public:
        OtuHour24Prbs();
        ~OtuHour24Prbs();

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
        class RcvPatt; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt
        class PrbsStatus; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus> prbs_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt> rcv_patt;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15 : public ydk::Entity
{
    public:
        OtuMinute15();
        ~OtuMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15Fecs; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs
        class OtuMinute15Otns; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns
        class OtuMinute15Prbses; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs> otu_minute15fecs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns> otu_minute15otns;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses> otu_minute15prbses;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs : public ydk::Entity
{
    public:
        OtuMinute15Fecs();
        ~OtuMinute15Fecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15Fec; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec> > otu_minute15fec;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec : public ydk::Entity
{
    public:
        OtuMinute15Fec();
        ~OtuMinute15Fec();

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
        class EcBits; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits
        class UcWords; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer
        class Q; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q
        class Qmargin; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin> qmargin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords> uc_words;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns : public ydk::Entity
{
    public:
        OtuMinute15Otns();
        ~OtuMinute15Otns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15Otn; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn> > otu_minute15otn;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn : public ydk::Entity
{
    public:
        OtuMinute15Otn();
        ~OtuMinute15Otn();

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
        class Lbc; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc
        class EsNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe
        class EsrNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe
        class SesNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe
        class SesrNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe
        class UasNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe
        class BbeNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe
        class BberNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe
        class FcNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe
        class EsFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe
        class EsrFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe
        class SesFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe
        class SesrFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe
        class UasFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe
        class BbeFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe
        class BberFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe
        class FcFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe> fc_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe> uas_ne;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses : public ydk::Entity
{
    public:
        OtuMinute15Prbses();
        ~OtuMinute15Prbses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15Prbs; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs> > otu_minute15prbs;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs : public ydk::Entity
{
    public:
        OtuMinute15Prbs();
        ~OtuMinute15Prbs();

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
        class RcvPatt; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt
        class PrbsStatus; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus> prbs_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt> rcv_patt;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30 : public ydk::Entity
{
    public:
        OtuSecond30();
        ~OtuSecond30();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30Fecs; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs
        class OtuSecond30Otns; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs> otu_second30fecs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns> otu_second30otns;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs : public ydk::Entity
{
    public:
        OtuSecond30Fecs();
        ~OtuSecond30Fecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30Fec; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec> > otu_second30fec;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec : public ydk::Entity
{
    public:
        OtuSecond30Fec();
        ~OtuSecond30Fec();

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
        class EcBits; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits
        class UcWords; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer
        class Q; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q
        class Qmargin; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin> qmargin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords> uc_words;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns : public ydk::Entity
{
    public:
        OtuSecond30Otns();
        ~OtuSecond30Otns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuSecond30Otn; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn> > otu_second30otn;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn : public ydk::Entity
{
    public:
        OtuSecond30Otn();
        ~OtuSecond30Otn();

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
        class Lbc; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc
        class EsNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe
        class EsrNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe
        class SesNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe
        class SesrNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe
        class UasNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe
        class BbeNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe
        class BberNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe
        class FcNe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe
        class EsFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe
        class EsrFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe
        class SesFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe
        class SesrFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe
        class UasFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe
        class BbeFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe
        class BberFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe
        class FcFe; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe> fc_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe> uas_ne;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe


class PerformanceManagement::Sonet : public ydk::Entity
{
    public:
        Sonet();
        ~Sonet();

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

        class SonetPorts; //type: PerformanceManagement::Sonet::SonetPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts> sonet_ports;
        
}; // PerformanceManagement::Sonet


class PerformanceManagement::Sonet::SonetPorts : public ydk::Entity
{
    public:
        SonetPorts();
        ~SonetPorts();

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

        class SonetPort; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort> > sonet_port;
        
}; // PerformanceManagement::Sonet::SonetPorts


class PerformanceManagement::Sonet::SonetPorts::SonetPort : public ydk::Entity
{
    public:
        SonetPort();
        ~SonetPort();

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
        class SonetCurrent; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent> sonet_current;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent : public ydk::Entity
{
    public:
        SonetCurrent();
        ~SonetCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15
        class SonetHour24; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24> sonet_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15> sonet_minute15;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24 : public ydk::Entity
{
    public:
        SonetHour24();
        ~SonetHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24Ocns; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns
        class SonetHour24Paths; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths> sonet_hour24_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns> sonet_hour24ocns;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns : public ydk::Entity
{
    public:
        SonetHour24Ocns();
        ~SonetHour24Ocns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24Ocn; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn> > sonet_hour24ocn;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn : public ydk::Entity
{
    public:
        SonetHour24Ocn();
        ~SonetHour24Ocn();

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
        class Section; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section
        class Line; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line
        class FeLine; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine> fe_line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section> section;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs
        class LineSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs
        class LineCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs
        class LineUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs> line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs> line_ua_ss;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs> section_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs> section_sef_ss;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths : public ydk::Entity
{
    public:
        SonetHour24Paths();
        ~SonetHour24Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24Path; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path> > sonet_hour24_path;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path : public ydk::Entity
{
    public:
        SonetHour24Path();
        ~SonetHour24Path();

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
        class Path; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path
        class FePath; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath> fe_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path> path;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path : public ydk::Entity
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
        class PathESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs
        class PathSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs
        class PathCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs
        class PathUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15 : public ydk::Entity
{
    public:
        SonetMinute15();
        ~SonetMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15Paths; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths
        class SonetMinute15Ocns; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths> sonet_minute15_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns> sonet_minute15ocns;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns : public ydk::Entity
{
    public:
        SonetMinute15Ocns();
        ~SonetMinute15Ocns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15Ocn; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn> > sonet_minute15ocn;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn : public ydk::Entity
{
    public:
        SonetMinute15Ocn();
        ~SonetMinute15Ocn();

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
        class Section; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section
        class Line; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line
        class FeLine; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine> fe_line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section> section;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs
        class LineSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs
        class LineCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs
        class LineUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs> line_fc_ls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs> line_ua_ss;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs> section_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs> section_sef_ss;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths : public ydk::Entity
{
    public:
        SonetMinute15Paths();
        ~SonetMinute15Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15Path; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path> > sonet_minute15_path;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path : public ydk::Entity
{
    public:
        SonetMinute15Path();
        ~SonetMinute15Path();

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
        class Path; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path
        class FePath; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath> fe_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path> path;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path : public ydk::Entity
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
        class PathESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs
        class PathSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs
        class PathCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs
        class PathUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs


class PerformanceManagement::Stm : public ydk::Entity
{
    public:
        Stm();
        ~Stm();

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

        class StmPorts; //type: PerformanceManagement::Stm::StmPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts> stm_ports;
        
}; // PerformanceManagement::Stm


class PerformanceManagement::Stm::StmPorts : public ydk::Entity
{
    public:
        StmPorts();
        ~StmPorts();

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

        class StmPort; //type: PerformanceManagement::Stm::StmPorts::StmPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort> > stm_port;
        
}; // PerformanceManagement::Stm::StmPorts


class PerformanceManagement::Stm::StmPorts::StmPort : public ydk::Entity
{
    public:
        StmPort();
        ~StmPort();

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
        class StmCurrent; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent> stm_current;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent : public ydk::Entity
{
    public:
        StmCurrent();
        ~StmCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24
        class StmMinute15; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24> stm_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15> stm_minute15;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_6_ */

