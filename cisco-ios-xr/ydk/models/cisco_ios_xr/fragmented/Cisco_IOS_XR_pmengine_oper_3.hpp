#ifndef _CISCO_IOS_XR_PMENGINE_OPER_3_
#define _CISCO_IOS_XR_PMENGINE_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_0.hpp"
#include "Cisco_IOS_XR_pmengine_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe> fc_fe;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt> rcv_patt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus> prbs_status;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin> qmargin;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe> fc_fe;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn


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


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24 : public ydk::Entity
{
    public:
        OtuHour24();
        ~OtuHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuHour24Fecs; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs
        class OtuHour24Prbses; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses
        class OtuHour24Otns; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs> otu_hour24fecs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses> otu_hour24prbses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns> otu_hour24otns;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs : public ydk::Entity
{
    public:
        OtuHour24Fecs();
        ~OtuHour24Fecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuHour24Fec; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec> > otu_hour24fec;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec : public ydk::Entity
{
    public:
        OtuHour24Fec();
        ~OtuHour24Fec();

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
        class EcBits; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits
        class UcWords; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer
        class Q; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q
        class Qmargin; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin> qmargin;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits


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


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer : public ydk::Entity
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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt> rcv_patt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus> prbs_status;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe> fc_fe;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn


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


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24 : public ydk::Entity
{
    public:
        StmHour24();
        ~StmHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24Stms; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms> stm_hour24stms;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms : public ydk::Entity
{
    public:
        StmHour24Stms();
        ~StmHour24Stms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24Stm; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm> > stm_hour24stm;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm : public ydk::Entity
{
    public:
        StmHour24Stm();
        ~StmHour24Stm();

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
        class Section; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section
        class Line; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line
        class FeLine; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine> fe_line;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs
        class SectionEsRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs
        class SectionBbEs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs
        class SectionBbeRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs
        class SectionSeSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs
        class SectionSesRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs
        class SectionUaSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs
        class SectionEBs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs> section_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs> section_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs> section_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs> section_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs> section_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs> section_e_bs;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs : public ydk::Entity
{
    public:
        SectionEsRs();
        ~SectionEsRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs : public ydk::Entity
{
    public:
        SectionBbEs();
        ~SectionBbEs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs : public ydk::Entity
{
    public:
        SectionBbeRs();
        ~SectionBbeRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs : public ydk::Entity
{
    public:
        SectionSesRs();
        ~SectionSesRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs : public ydk::Entity
{
    public:
        SectionUaSs();
        ~SectionUaSs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs : public ydk::Entity
{
    public:
        SectionEBs();
        ~SectionEBs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs
        class LineEsRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs
        class LineBbEs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs
        class LineBbeRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs
        class LineSeSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs
        class LineSesRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs
        class LineUaSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs
        class LineEBs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs> line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs> line_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs> line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs> line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs> line_e_bs;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs : public ydk::Entity
{
    public:
        LineEsRs();
        ~LineEsRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs : public ydk::Entity
{
    public:
        LineBbEs();
        ~LineBbEs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs : public ydk::Entity
{
    public:
        LineBbeRs();
        ~LineBbeRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs : public ydk::Entity
{
    public:
        LineSesRs();
        ~LineSesRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs : public ydk::Entity
{
    public:
        LineEBs();
        ~LineEBs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs
        class FarEndLineEsRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs
        class FarEndLineEbbEs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs
        class FarEndLineBbeRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs
        class FarEndLineSeSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs
        class FarEndLineSesRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs
        class FarEndLineUaSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs
        class FarEndLineEBs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs> far_end_line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs> far_end_line_ebb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs> far_end_line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs> far_end_line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs> far_end_line_e_bs;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs : public ydk::Entity
{
    public:
        FarEndLineEsRs();
        ~FarEndLineEsRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs : public ydk::Entity
{
    public:
        FarEndLineEbbEs();
        ~FarEndLineEbbEs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs : public ydk::Entity
{
    public:
        FarEndLineBbeRs();
        ~FarEndLineBbeRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs : public ydk::Entity
{
    public:
        FarEndLineSesRs();
        ~FarEndLineSesRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs : public ydk::Entity
{
    public:
        FarEndLineEBs();
        ~FarEndLineEBs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15 : public ydk::Entity
{
    public:
        StmMinute15();
        ~StmMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmMinute15Stms; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms> stm_minute15stms;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms : public ydk::Entity
{
    public:
        StmMinute15Stms();
        ~StmMinute15Stms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmMinute15Stm; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm> > stm_minute15stm;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm : public ydk::Entity
{
    public:
        StmMinute15Stm();
        ~StmMinute15Stm();

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
        class Section; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section
        class Line; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line
        class FeLine; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine> fe_line;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs
        class SectionEsRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs
        class SectionBbEs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs
        class SectionBbeRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs
        class SectionSeSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs
        class SectionSesRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs
        class SectionUaSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs
        class SectionEBs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs> section_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs> section_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs> section_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs> section_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs> section_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs> section_e_bs;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs : public ydk::Entity
{
    public:
        SectionEsRs();
        ~SectionEsRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs : public ydk::Entity
{
    public:
        SectionBbEs();
        ~SectionBbEs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs : public ydk::Entity
{
    public:
        SectionBbeRs();
        ~SectionBbeRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs : public ydk::Entity
{
    public:
        SectionSesRs();
        ~SectionSesRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs : public ydk::Entity
{
    public:
        SectionUaSs();
        ~SectionUaSs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs : public ydk::Entity
{
    public:
        SectionEBs();
        ~SectionEBs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs
        class LineEsRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs
        class LineBbEs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs
        class LineBbeRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs
        class LineSeSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs
        class LineSesRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs
        class LineUaSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs
        class LineEBs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs> line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs> line_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs> line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs> line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs> line_e_bs;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs : public ydk::Entity
{
    public:
        LineEsRs();
        ~LineEsRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs : public ydk::Entity
{
    public:
        LineBbEs();
        ~LineBbEs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs : public ydk::Entity
{
    public:
        LineBbeRs();
        ~LineBbeRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs : public ydk::Entity
{
    public:
        LineSesRs();
        ~LineSesRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs : public ydk::Entity
{
    public:
        LineEBs();
        ~LineEBs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs
        class FarEndLineEsRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs
        class FarEndLineEbbEs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs
        class FarEndLineBbeRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs
        class FarEndLineSeSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs
        class FarEndLineSesRs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs
        class FarEndLineUaSs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs
        class FarEndLineEBs; //type: PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs> far_end_line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs> far_end_line_ebb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs> far_end_line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs> far_end_line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs> far_end_line_e_bs;
        
}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs : public ydk::Entity
{
    public:
        FarEndLineEsRs();
        ~FarEndLineEsRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs : public ydk::Entity
{
    public:
        FarEndLineEbbEs();
        ~FarEndLineEbbEs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs : public ydk::Entity
{
    public:
        FarEndLineBbeRs();
        ~FarEndLineBbeRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs : public ydk::Entity
{
    public:
        FarEndLineSesRs();
        ~FarEndLineSesRs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs


class PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs : public ydk::Entity
{
    public:
        FarEndLineEBs();
        ~FarEndLineEBs();

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

}; // PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs


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


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_3_ */

