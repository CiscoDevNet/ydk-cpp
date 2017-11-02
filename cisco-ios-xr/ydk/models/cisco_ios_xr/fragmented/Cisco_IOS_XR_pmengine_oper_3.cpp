
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_3.hpp"
#include "Cisco_IOS_XR_pmengine_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otns()
{

    yang_name = "otu-minute15otns"; yang_parent_name = "otu-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::~OtuMinute15Otns()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::has_data() const
{
    for (std::size_t index=0; index<otu_minute15otn.size(); index++)
    {
        if(otu_minute15otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15otn.size(); index++)
    {
        if(otu_minute15otn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15otn")
    {
        for(auto const & c : otu_minute15otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn>();
        c->parent = this;
        otu_minute15otn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_minute15otn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15otn")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::OtuMinute15Otn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    lbc(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc>())
	,es_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe>())
	,esr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe>())
	,ses_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe>())
	,uas_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe>())
	,bber_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe>())
	,fc_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe>())
	,es_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe>())
	,esr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe>())
	,ses_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe>())
	,uas_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe>())
	,bbe_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe>())
	,bber_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe>())
	,fc_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe>())
{
    lbc->parent = this;
    es_ne->parent = this;
    esr_ne->parent = this;
    ses_ne->parent = this;
    sesr_ne->parent = this;
    uas_ne->parent = this;
    bbe_ne->parent = this;
    bber_ne->parent = this;
    fc_ne->parent = this;
    es_fe->parent = this;
    esr_fe->parent = this;
    ses_fe->parent = this;
    sesr_fe->parent = this;
    uas_fe->parent = this;
    bbe_fe->parent = this;
    bber_fe->parent = this;
    fc_fe->parent = this;

    yang_name = "otu-minute15otn"; yang_parent_name = "otu-minute15otns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::~OtuMinute15Otn()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (lbc !=  nullptr && lbc->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15otn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe>();
        }
        return uas_ne;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe>();
        }
        return fc_fe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(es_ne != nullptr)
    {
        children["es-ne"] = es_ne;
    }

    if(esr_ne != nullptr)
    {
        children["esr-ne"] = esr_ne;
    }

    if(ses_ne != nullptr)
    {
        children["ses-ne"] = ses_ne;
    }

    if(sesr_ne != nullptr)
    {
        children["sesr-ne"] = sesr_ne;
    }

    if(uas_ne != nullptr)
    {
        children["uas-ne"] = uas_ne;
    }

    if(bbe_ne != nullptr)
    {
        children["bbe-ne"] = bbe_ne;
    }

    if(bber_ne != nullptr)
    {
        children["bber-ne"] = bber_ne;
    }

    if(fc_ne != nullptr)
    {
        children["fc-ne"] = fc_ne;
    }

    if(es_fe != nullptr)
    {
        children["es-fe"] = es_fe;
    }

    if(esr_fe != nullptr)
    {
        children["esr-fe"] = esr_fe;
    }

    if(ses_fe != nullptr)
    {
        children["ses-fe"] = ses_fe;
    }

    if(sesr_fe != nullptr)
    {
        children["sesr-fe"] = sesr_fe;
    }

    if(uas_fe != nullptr)
    {
        children["uas-fe"] = uas_fe;
    }

    if(bbe_fe != nullptr)
    {
        children["bbe-fe"] = bbe_fe;
    }

    if(bber_fe != nullptr)
    {
        children["bber-fe"] = bber_fe;
    }

    if(fc_fe != nullptr)
    {
        children["fc-fe"] = fc_fe;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "es-ne" || name == "esr-ne" || name == "ses-ne" || name == "sesr-ne" || name == "uas-ne" || name == "bbe-ne" || name == "bber-ne" || name == "fc-ne" || name == "es-fe" || name == "esr-fe" || name == "ses-fe" || name == "sesr-fe" || name == "uas-fe" || name == "bbe-fe" || name == "bber-fe" || name == "fc-fe" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-minute15otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns::OtuMinute15Otn::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbses()
{

    yang_name = "otu-minute15prbses"; yang_parent_name = "otu-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::~OtuMinute15Prbses()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::has_data() const
{
    for (std::size_t index=0; index<otu_minute15prbs.size(); index++)
    {
        if(otu_minute15prbs[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::has_operation() const
{
    for (std::size_t index=0; index<otu_minute15prbs.size(); index++)
    {
        if(otu_minute15prbs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-minute15prbs")
    {
        for(auto const & c : otu_minute15prbs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs>();
        c->parent = this;
        otu_minute15prbs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_minute15prbs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-minute15prbs")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::OtuMinute15Prbs()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    ebc{YType::uint64, "ebc"},
    found_count{YType::uint32, "found-count"},
    lost_count{YType::uint32, "lost-count"},
    found_at_time{YType::uint64, "found-at-time"},
    lost_at_time{YType::uint64, "lost-at-time"},
    conf_patt{YType::enumeration, "conf-patt"}
    	,
    rcv_patt(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt>())
	,prbs_status(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus>())
{
    rcv_patt->parent = this;
    prbs_status->parent = this;

    yang_name = "otu-minute15prbs"; yang_parent_name = "otu-minute15prbses"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::~OtuMinute15Prbs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| ebc.is_set
	|| found_count.is_set
	|| lost_count.is_set
	|| found_at_time.is_set
	|| lost_at_time.is_set
	|| conf_patt.is_set
	|| (rcv_patt !=  nullptr && rcv_patt->has_data())
	|| (prbs_status !=  nullptr && prbs_status->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(ebc.yfilter)
	|| ydk::is_set(found_count.yfilter)
	|| ydk::is_set(lost_count.yfilter)
	|| ydk::is_set(found_at_time.yfilter)
	|| ydk::is_set(lost_at_time.yfilter)
	|| ydk::is_set(conf_patt.yfilter)
	|| (rcv_patt !=  nullptr && rcv_patt->has_operation())
	|| (prbs_status !=  nullptr && prbs_status->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-minute15prbs" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (ebc.is_set || is_set(ebc.yfilter)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.yfilter)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.yfilter)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (found_at_time.is_set || is_set(found_at_time.yfilter)) leaf_name_data.push_back(found_at_time.get_name_leafdata());
    if (lost_at_time.is_set || is_set(lost_at_time.yfilter)) leaf_name_data.push_back(lost_at_time.get_name_leafdata());
    if (conf_patt.is_set || is_set(conf_patt.yfilter)) leaf_name_data.push_back(conf_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt>();
        }
        return rcv_patt;
    }

    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus>();
        }
        return prbs_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rcv_patt != nullptr)
    {
        children["rcv-patt"] = rcv_patt;
    }

    if(prbs_status != nullptr)
    {
        children["prbs-status"] = prbs_status;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebc")
    {
        ebc = value;
        ebc.value_namespace = name_space;
        ebc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-count")
    {
        found_count = value;
        found_count.value_namespace = name_space;
        found_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
        lost_count.value_namespace = name_space;
        lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-at-time")
    {
        found_at_time = value;
        found_at_time.value_namespace = name_space;
        found_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time = value;
        lost_at_time.value_namespace = name_space;
        lost_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conf-patt")
    {
        conf_patt = value;
        conf_patt.value_namespace = name_space;
        conf_patt.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "ebc")
    {
        ebc.yfilter = yfilter;
    }
    if(value_path == "found-count")
    {
        found_count.yfilter = yfilter;
    }
    if(value_path == "lost-count")
    {
        lost_count.yfilter = yfilter;
    }
    if(value_path == "found-at-time")
    {
        found_at_time.yfilter = yfilter;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time.yfilter = yfilter;
    }
    if(value_path == "conf-patt")
    {
        conf_patt.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "prbs-status" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "ebc" || name == "found-count" || name == "lost-count" || name == "found-at-time" || name == "lost-at-time" || name == "conf-patt")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::RcvPatt()
    :
    valid{YType::boolean, "valid"},
    rcv_patt{YType::enumeration, "rcv-patt"}
{

    yang_name = "rcv-patt"; yang_parent_name = "otu-minute15prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::has_data() const
{
    return valid.is_set
	|| rcv_patt.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rcv_patt.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-patt")
    {
        rcv_patt = value;
        rcv_patt.value_namespace = name_space;
        rcv_patt.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "rcv-patt")
    {
        rcv_patt.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "rcv-patt")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::PrbsStatus()
    :
    valid{YType::boolean, "valid"},
    prbs_status{YType::enumeration, "prbs-status"}
{

    yang_name = "prbs-status"; yang_parent_name = "otu-minute15prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::has_data() const
{
    return valid.is_set
	|| prbs_status.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(prbs_status.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prbs-status")
    {
        prbs_status = value;
        prbs_status.value_namespace = name_space;
        prbs_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "prbs-status")
    {
        prbs_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses::OtuMinute15Prbs::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "prbs-status")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30()
    :
    otu_second30fecs(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs>())
	,otu_second30otns(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns>())
{
    otu_second30fecs->parent = this;
    otu_second30otns->parent = this;

    yang_name = "otu-second30"; yang_parent_name = "otu-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::~OtuSecond30()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::has_data() const
{
    return (otu_second30fecs !=  nullptr && otu_second30fecs->has_data())
	|| (otu_second30otns !=  nullptr && otu_second30otns->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::has_operation() const
{
    return is_set(yfilter)
	|| (otu_second30fecs !=  nullptr && otu_second30fecs->has_operation())
	|| (otu_second30otns !=  nullptr && otu_second30otns->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fecs")
    {
        if(otu_second30fecs == nullptr)
        {
            otu_second30fecs = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs>();
        }
        return otu_second30fecs;
    }

    if(child_yang_name == "otu-second30otns")
    {
        if(otu_second30otns == nullptr)
        {
            otu_second30otns = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns>();
        }
        return otu_second30otns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_second30fecs != nullptr)
    {
        children["otu-second30fecs"] = otu_second30fecs;
    }

    if(otu_second30otns != nullptr)
    {
        children["otu-second30otns"] = otu_second30otns;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fecs" || name == "otu-second30otns")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fecs()
{

    yang_name = "otu-second30fecs"; yang_parent_name = "otu-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::~OtuSecond30Fecs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::has_data() const
{
    for (std::size_t index=0; index<otu_second30fec.size(); index++)
    {
        if(otu_second30fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::has_operation() const
{
    for (std::size_t index=0; index<otu_second30fec.size(); index++)
    {
        if(otu_second30fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30fec")
    {
        for(auto const & c : otu_second30fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec>();
        c->parent = this;
        otu_second30fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_second30fec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30fec")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::OtuSecond30Fec()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    ec_bits(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits>())
	,uc_words(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer>())
	,q(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "otu-second30fec"; yang_parent_name = "otu-second30fecs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::~OtuSecond30Fec()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30fec" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec_bits != nullptr)
    {
        children["ec-bits"] = ec_bits;
    }

    if(uc_words != nullptr)
    {
        children["uc-words"] = uc_words;
    }

    if(pre_fec_ber != nullptr)
    {
        children["pre-fec-ber"] = pre_fec_ber;
    }

    if(post_fec_ber != nullptr)
    {
        children["post-fec-ber"] = post_fec_ber;
    }

    if(q != nullptr)
    {
        children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        children["qmargin"] = qmargin;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::PreFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::PostFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::Q()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::~Q()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::Qmargin()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "otu-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Fecs::OtuSecond30Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otns()
{

    yang_name = "otu-second30otns"; yang_parent_name = "otu-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::~OtuSecond30Otns()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::has_data() const
{
    for (std::size_t index=0; index<otu_second30otn.size(); index++)
    {
        if(otu_second30otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::has_operation() const
{
    for (std::size_t index=0; index<otu_second30otn.size(); index++)
    {
        if(otu_second30otn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-second30otn")
    {
        for(auto const & c : otu_second30otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn>();
        c->parent = this;
        otu_second30otn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_second30otn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-second30otn")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::OtuSecond30Otn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    lbc(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc>())
	,es_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe>())
	,esr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe>())
	,ses_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe>())
	,uas_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe>())
	,bber_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe>())
	,fc_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe>())
	,es_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe>())
	,esr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe>())
	,ses_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe>())
	,uas_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe>())
	,bbe_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe>())
	,bber_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe>())
	,fc_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe>())
{
    lbc->parent = this;
    es_ne->parent = this;
    esr_ne->parent = this;
    ses_ne->parent = this;
    sesr_ne->parent = this;
    uas_ne->parent = this;
    bbe_ne->parent = this;
    bber_ne->parent = this;
    fc_ne->parent = this;
    es_fe->parent = this;
    esr_fe->parent = this;
    ses_fe->parent = this;
    sesr_fe->parent = this;
    uas_fe->parent = this;
    bbe_fe->parent = this;
    bber_fe->parent = this;
    fc_fe->parent = this;

    yang_name = "otu-second30otn"; yang_parent_name = "otu-second30otns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::~OtuSecond30Otn()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (lbc !=  nullptr && lbc->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-second30otn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe>();
        }
        return uas_ne;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe>();
        }
        return fc_fe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(es_ne != nullptr)
    {
        children["es-ne"] = es_ne;
    }

    if(esr_ne != nullptr)
    {
        children["esr-ne"] = esr_ne;
    }

    if(ses_ne != nullptr)
    {
        children["ses-ne"] = ses_ne;
    }

    if(sesr_ne != nullptr)
    {
        children["sesr-ne"] = sesr_ne;
    }

    if(uas_ne != nullptr)
    {
        children["uas-ne"] = uas_ne;
    }

    if(bbe_ne != nullptr)
    {
        children["bbe-ne"] = bbe_ne;
    }

    if(bber_ne != nullptr)
    {
        children["bber-ne"] = bber_ne;
    }

    if(fc_ne != nullptr)
    {
        children["fc-ne"] = fc_ne;
    }

    if(es_fe != nullptr)
    {
        children["es-fe"] = es_fe;
    }

    if(esr_fe != nullptr)
    {
        children["esr-fe"] = esr_fe;
    }

    if(ses_fe != nullptr)
    {
        children["ses-fe"] = ses_fe;
    }

    if(sesr_fe != nullptr)
    {
        children["sesr-fe"] = sesr_fe;
    }

    if(uas_fe != nullptr)
    {
        children["uas-fe"] = uas_fe;
    }

    if(bbe_fe != nullptr)
    {
        children["bbe-fe"] = bbe_fe;
    }

    if(bber_fe != nullptr)
    {
        children["bber-fe"] = bber_fe;
    }

    if(fc_fe != nullptr)
    {
        children["fc-fe"] = fc_fe;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "es-ne" || name == "esr-ne" || name == "ses-ne" || name == "sesr-ne" || name == "uas-ne" || name == "bbe-ne" || name == "bber-ne" || name == "fc-ne" || name == "es-fe" || name == "esr-fe" || name == "ses-fe" || name == "sesr-fe" || name == "uas-fe" || name == "bbe-fe" || name == "bber-fe" || name == "fc-fe" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-second30otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24()
    :
    otu_hour24fecs(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs>())
	,otu_hour24prbses(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses>())
	,otu_hour24otns(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns>())
{
    otu_hour24fecs->parent = this;
    otu_hour24prbses->parent = this;
    otu_hour24otns->parent = this;

    yang_name = "otu-hour24"; yang_parent_name = "otu-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::~OtuHour24()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::has_data() const
{
    return (otu_hour24fecs !=  nullptr && otu_hour24fecs->has_data())
	|| (otu_hour24prbses !=  nullptr && otu_hour24prbses->has_data())
	|| (otu_hour24otns !=  nullptr && otu_hour24otns->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::has_operation() const
{
    return is_set(yfilter)
	|| (otu_hour24fecs !=  nullptr && otu_hour24fecs->has_operation())
	|| (otu_hour24prbses !=  nullptr && otu_hour24prbses->has_operation())
	|| (otu_hour24otns !=  nullptr && otu_hour24otns->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24fecs")
    {
        if(otu_hour24fecs == nullptr)
        {
            otu_hour24fecs = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs>();
        }
        return otu_hour24fecs;
    }

    if(child_yang_name == "otu-hour24prbses")
    {
        if(otu_hour24prbses == nullptr)
        {
            otu_hour24prbses = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses>();
        }
        return otu_hour24prbses;
    }

    if(child_yang_name == "otu-hour24otns")
    {
        if(otu_hour24otns == nullptr)
        {
            otu_hour24otns = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns>();
        }
        return otu_hour24otns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otu_hour24fecs != nullptr)
    {
        children["otu-hour24fecs"] = otu_hour24fecs;
    }

    if(otu_hour24prbses != nullptr)
    {
        children["otu-hour24prbses"] = otu_hour24prbses;
    }

    if(otu_hour24otns != nullptr)
    {
        children["otu-hour24otns"] = otu_hour24otns;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24fecs" || name == "otu-hour24prbses" || name == "otu-hour24otns")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fecs()
{

    yang_name = "otu-hour24fecs"; yang_parent_name = "otu-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::~OtuHour24Fecs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::has_data() const
{
    for (std::size_t index=0; index<otu_hour24fec.size(); index++)
    {
        if(otu_hour24fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24fec.size(); index++)
    {
        if(otu_hour24fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24fec")
    {
        for(auto const & c : otu_hour24fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec>();
        c->parent = this;
        otu_hour24fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_hour24fec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24fec")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::OtuHour24Fec()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    ec_bits(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits>())
	,uc_words(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer>())
	,q(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "otu-hour24fec"; yang_parent_name = "otu-hour24fecs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::~OtuHour24Fec()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24fec" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec_bits != nullptr)
    {
        children["ec-bits"] = ec_bits;
    }

    if(uc_words != nullptr)
    {
        children["uc-words"] = uc_words;
    }

    if(pre_fec_ber != nullptr)
    {
        children["pre-fec-ber"] = pre_fec_ber;
    }

    if(post_fec_ber != nullptr)
    {
        children["post-fec-ber"] = post_fec_ber;
    }

    if(q != nullptr)
    {
        children["q"] = q;
    }

    if(qmargin != nullptr)
    {
        children["qmargin"] = qmargin;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::PreFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::PostFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::Q()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::~Q()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::Qmargin()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "otu-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbses()
{

    yang_name = "otu-hour24prbses"; yang_parent_name = "otu-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::~OtuHour24Prbses()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::has_data() const
{
    for (std::size_t index=0; index<otu_hour24prbs.size(); index++)
    {
        if(otu_hour24prbs[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24prbs.size(); index++)
    {
        if(otu_hour24prbs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24prbs")
    {
        for(auto const & c : otu_hour24prbs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs>();
        c->parent = this;
        otu_hour24prbs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_hour24prbs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24prbs")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::OtuHour24Prbs()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    ebc{YType::uint64, "ebc"},
    found_count{YType::uint32, "found-count"},
    lost_count{YType::uint32, "lost-count"},
    found_at_time{YType::uint64, "found-at-time"},
    lost_at_time{YType::uint64, "lost-at-time"},
    conf_patt{YType::enumeration, "conf-patt"}
    	,
    rcv_patt(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt>())
	,prbs_status(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus>())
{
    rcv_patt->parent = this;
    prbs_status->parent = this;

    yang_name = "otu-hour24prbs"; yang_parent_name = "otu-hour24prbses"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::~OtuHour24Prbs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| ebc.is_set
	|| found_count.is_set
	|| lost_count.is_set
	|| found_at_time.is_set
	|| lost_at_time.is_set
	|| conf_patt.is_set
	|| (rcv_patt !=  nullptr && rcv_patt->has_data())
	|| (prbs_status !=  nullptr && prbs_status->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(ebc.yfilter)
	|| ydk::is_set(found_count.yfilter)
	|| ydk::is_set(lost_count.yfilter)
	|| ydk::is_set(found_at_time.yfilter)
	|| ydk::is_set(lost_at_time.yfilter)
	|| ydk::is_set(conf_patt.yfilter)
	|| (rcv_patt !=  nullptr && rcv_patt->has_operation())
	|| (prbs_status !=  nullptr && prbs_status->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24prbs" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (ebc.is_set || is_set(ebc.yfilter)) leaf_name_data.push_back(ebc.get_name_leafdata());
    if (found_count.is_set || is_set(found_count.yfilter)) leaf_name_data.push_back(found_count.get_name_leafdata());
    if (lost_count.is_set || is_set(lost_count.yfilter)) leaf_name_data.push_back(lost_count.get_name_leafdata());
    if (found_at_time.is_set || is_set(found_at_time.yfilter)) leaf_name_data.push_back(found_at_time.get_name_leafdata());
    if (lost_at_time.is_set || is_set(lost_at_time.yfilter)) leaf_name_data.push_back(lost_at_time.get_name_leafdata());
    if (conf_patt.is_set || is_set(conf_patt.yfilter)) leaf_name_data.push_back(conf_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rcv-patt")
    {
        if(rcv_patt == nullptr)
        {
            rcv_patt = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt>();
        }
        return rcv_patt;
    }

    if(child_yang_name == "prbs-status")
    {
        if(prbs_status == nullptr)
        {
            prbs_status = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus>();
        }
        return prbs_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rcv_patt != nullptr)
    {
        children["rcv-patt"] = rcv_patt;
    }

    if(prbs_status != nullptr)
    {
        children["prbs-status"] = prbs_status;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebc")
    {
        ebc = value;
        ebc.value_namespace = name_space;
        ebc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-count")
    {
        found_count = value;
        found_count.value_namespace = name_space;
        found_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-count")
    {
        lost_count = value;
        lost_count.value_namespace = name_space;
        lost_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found-at-time")
    {
        found_at_time = value;
        found_at_time.value_namespace = name_space;
        found_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time = value;
        lost_at_time.value_namespace = name_space;
        lost_at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conf-patt")
    {
        conf_patt = value;
        conf_patt.value_namespace = name_space;
        conf_patt.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "ebc")
    {
        ebc.yfilter = yfilter;
    }
    if(value_path == "found-count")
    {
        found_count.yfilter = yfilter;
    }
    if(value_path == "lost-count")
    {
        lost_count.yfilter = yfilter;
    }
    if(value_path == "found-at-time")
    {
        found_at_time.yfilter = yfilter;
    }
    if(value_path == "lost-at-time")
    {
        lost_at_time.yfilter = yfilter;
    }
    if(value_path == "conf-patt")
    {
        conf_patt.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcv-patt" || name == "prbs-status" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "ebc" || name == "found-count" || name == "lost-count" || name == "found-at-time" || name == "lost-at-time" || name == "conf-patt")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::RcvPatt()
    :
    valid{YType::boolean, "valid"},
    rcv_patt{YType::enumeration, "rcv-patt"}
{

    yang_name = "rcv-patt"; yang_parent_name = "otu-hour24prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::~RcvPatt()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::has_data() const
{
    return valid.is_set
	|| rcv_patt.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(rcv_patt.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-patt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (rcv_patt.is_set || is_set(rcv_patt.yfilter)) leaf_name_data.push_back(rcv_patt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-patt")
    {
        rcv_patt = value;
        rcv_patt.value_namespace = name_space;
        rcv_patt.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "rcv-patt")
    {
        rcv_patt.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::RcvPatt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "rcv-patt")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::PrbsStatus()
    :
    valid{YType::boolean, "valid"},
    prbs_status{YType::enumeration, "prbs-status"}
{

    yang_name = "prbs-status"; yang_parent_name = "otu-hour24prbs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::~PrbsStatus()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::has_data() const
{
    return valid.is_set
	|| prbs_status.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(prbs_status.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (prbs_status.is_set || is_set(prbs_status.yfilter)) leaf_name_data.push_back(prbs_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prbs-status")
    {
        prbs_status = value;
        prbs_status.value_namespace = name_space;
        prbs_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "prbs-status")
    {
        prbs_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Prbses::OtuHour24Prbs::PrbsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "prbs-status")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otns()
{

    yang_name = "otu-hour24otns"; yang_parent_name = "otu-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::~OtuHour24Otns()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::has_data() const
{
    for (std::size_t index=0; index<otu_hour24otn.size(); index++)
    {
        if(otu_hour24otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24otn.size(); index++)
    {
        if(otu_hour24otn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-hour24otn")
    {
        for(auto const & c : otu_hour24otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn>();
        c->parent = this;
        otu_hour24otn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : otu_hour24otn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-hour24otn")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::OtuHour24Otn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    lbc(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc>())
	,es_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe>())
	,esr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe>())
	,ses_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe>())
	,uas_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe>())
	,bber_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe>())
	,fc_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe>())
	,es_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe>())
	,esr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe>())
	,ses_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe>())
	,uas_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe>())
	,bbe_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe>())
	,bber_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe>())
	,fc_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe>())
{
    lbc->parent = this;
    es_ne->parent = this;
    esr_ne->parent = this;
    ses_ne->parent = this;
    sesr_ne->parent = this;
    uas_ne->parent = this;
    bbe_ne->parent = this;
    bber_ne->parent = this;
    fc_ne->parent = this;
    es_fe->parent = this;
    esr_fe->parent = this;
    ses_fe->parent = this;
    sesr_fe->parent = this;
    uas_fe->parent = this;
    bbe_fe->parent = this;
    bber_fe->parent = this;
    fc_fe->parent = this;

    yang_name = "otu-hour24otn"; yang_parent_name = "otu-hour24otns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::~OtuHour24Otn()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (lbc !=  nullptr && lbc->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe>();
        }
        return uas_ne;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe>();
        }
        return fc_fe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(es_ne != nullptr)
    {
        children["es-ne"] = es_ne;
    }

    if(esr_ne != nullptr)
    {
        children["esr-ne"] = esr_ne;
    }

    if(ses_ne != nullptr)
    {
        children["ses-ne"] = ses_ne;
    }

    if(sesr_ne != nullptr)
    {
        children["sesr-ne"] = sesr_ne;
    }

    if(uas_ne != nullptr)
    {
        children["uas-ne"] = uas_ne;
    }

    if(bbe_ne != nullptr)
    {
        children["bbe-ne"] = bbe_ne;
    }

    if(bber_ne != nullptr)
    {
        children["bber-ne"] = bber_ne;
    }

    if(fc_ne != nullptr)
    {
        children["fc-ne"] = fc_ne;
    }

    if(es_fe != nullptr)
    {
        children["es-fe"] = es_fe;
    }

    if(esr_fe != nullptr)
    {
        children["esr-fe"] = esr_fe;
    }

    if(ses_fe != nullptr)
    {
        children["ses-fe"] = ses_fe;
    }

    if(sesr_fe != nullptr)
    {
        children["sesr-fe"] = sesr_fe;
    }

    if(uas_fe != nullptr)
    {
        children["uas-fe"] = uas_fe;
    }

    if(bbe_fe != nullptr)
    {
        children["bbe-fe"] = bbe_fe;
    }

    if(bber_fe != nullptr)
    {
        children["bber-fe"] = bber_fe;
    }

    if(fc_fe != nullptr)
    {
        children["fc-fe"] = fc_fe;
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "es-ne" || name == "esr-ne" || name == "ses-ne" || name == "sesr-ne" || name == "uas-ne" || name == "bbe-ne" || name == "bber-ne" || name == "fc-ne" || name == "es-fe" || name == "esr-fe" || name == "ses-fe" || name == "sesr-fe" || name == "uas-fe" || name == "bbe-fe" || name == "bber-fe" || name == "fc-fe" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-ne"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-fe"; yang_parent_name = "otu-hour24otn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::Stm()
    :
    stm_ports(std::make_shared<PerformanceManagement::Stm::StmPorts>())
{
    stm_ports->parent = this;

    yang_name = "stm"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Stm::~Stm()
{
}

bool PerformanceManagement::Stm::has_data() const
{
    return (stm_ports !=  nullptr && stm_ports->has_data());
}

bool PerformanceManagement::Stm::has_operation() const
{
    return is_set(yfilter)
	|| (stm_ports !=  nullptr && stm_ports->has_operation());
}

std::string PerformanceManagement::Stm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-ports")
    {
        if(stm_ports == nullptr)
        {
            stm_ports = std::make_shared<PerformanceManagement::Stm::StmPorts>();
        }
        return stm_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_ports != nullptr)
    {
        children["stm-ports"] = stm_ports;
    }

    return children;
}

void PerformanceManagement::Stm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-ports")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPorts()
{

    yang_name = "stm-ports"; yang_parent_name = "stm"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Stm::StmPorts::~StmPorts()
{
}

bool PerformanceManagement::Stm::StmPorts::has_data() const
{
    for (std::size_t index=0; index<stm_port.size(); index++)
    {
        if(stm_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Stm::StmPorts::has_operation() const
{
    for (std::size_t index=0; index<stm_port.size(); index++)
    {
        if(stm_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/stm/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Stm::StmPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-port")
    {
        for(auto const & c : stm_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort>();
        c->parent = this;
        stm_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::StmPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::StmPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-port")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmPort()
    :
    name{YType::str, "name"}
    	,
    stm_current(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent>())
{
    stm_current->parent = this;

    yang_name = "stm-port"; yang_parent_name = "stm-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Stm::StmPorts::StmPort::~StmPort()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::has_data() const
{
    return name.is_set
	|| (stm_current !=  nullptr && stm_current->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (stm_current !=  nullptr && stm_current->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/stm/stm-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-current")
    {
        if(stm_current == nullptr)
        {
            stm_current = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent>();
        }
        return stm_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_current != nullptr)
    {
        children["stm-current"] = stm_current;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmCurrent()
    :
    stm_hour24(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24>())
	,stm_minute15(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15>())
{
    stm_hour24->parent = this;
    stm_minute15->parent = this;

    yang_name = "stm-current"; yang_parent_name = "stm-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::~StmCurrent()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::has_data() const
{
    return (stm_hour24 !=  nullptr && stm_hour24->has_data())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24 !=  nullptr && stm_hour24->has_operation())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24")
    {
        if(stm_hour24 == nullptr)
        {
            stm_hour24 = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24>();
        }
        return stm_hour24;
    }

    if(child_yang_name == "stm-minute15")
    {
        if(stm_minute15 == nullptr)
        {
            stm_minute15 = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15>();
        }
        return stm_minute15;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_hour24 != nullptr)
    {
        children["stm-hour24"] = stm_hour24;
    }

    if(stm_minute15 != nullptr)
    {
        children["stm-minute15"] = stm_minute15;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24" || name == "stm-minute15")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24()
    :
    stm_hour24stms(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms>())
{
    stm_hour24stms->parent = this;

    yang_name = "stm-hour24"; yang_parent_name = "stm-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::~StmHour24()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::has_data() const
{
    return (stm_hour24stms !=  nullptr && stm_hour24stms->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24stms !=  nullptr && stm_hour24stms->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24stms")
    {
        if(stm_hour24stms == nullptr)
        {
            stm_hour24stms = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms>();
        }
        return stm_hour24stms;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_hour24stms != nullptr)
    {
        children["stm-hour24stms"] = stm_hour24stms;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24stms")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stms()
{

    yang_name = "stm-hour24stms"; yang_parent_name = "stm-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::~StmHour24Stms()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::has_data() const
{
    for (std::size_t index=0; index<stm_hour24stm.size(); index++)
    {
        if(stm_hour24stm[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24stm.size(); index++)
    {
        if(stm_hour24stm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24stms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24stm")
    {
        for(auto const & c : stm_hour24stm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm>();
        c->parent = this;
        stm_hour24stm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_hour24stm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24stm")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::StmHour24Stm()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
    	,
    section(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section>())
	,line(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line>())
	,fe_line(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine>())
{
    section->parent = this;
    line->parent = this;
    fe_line->parent = this;

    yang_name = "stm-hour24stm"; yang_parent_name = "stm-hour24stms"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::~StmHour24Stm()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (section !=  nullptr && section->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (fe_line !=  nullptr && fe_line->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (section !=  nullptr && section->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (fe_line !=  nullptr && fe_line->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24stm" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section>();
        }
        return section;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line>();
        }
        return line;
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine>();
        }
        return fe_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(section != nullptr)
    {
        children["section"] = section;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section" || name == "line" || name == "fe-line" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs>())
	,section_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs>())
	,section_bb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs>())
	,section_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs>())
	,section_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs>())
	,section_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs>())
	,section_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs>())
{
    section_e_ss->parent = this;
    section_es_rs->parent = this;
    section_bb_es->parent = this;
    section_bbe_rs->parent = this;
    section_se_ss->parent = this;
    section_ses_rs->parent = this;
    section_ua_ss->parent = this;
    section_e_bs->parent = this;

    yang_name = "section"; yang_parent_name = "stm-hour24stm"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::~Section()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::has_data() const
{
    return section_status.is_set
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_es_rs !=  nullptr && section_es_rs->has_data())
	|| (section_bb_es !=  nullptr && section_bb_es->has_data())
	|| (section_bbe_rs !=  nullptr && section_bbe_rs->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_ses_rs !=  nullptr && section_ses_rs->has_data())
	|| (section_ua_ss !=  nullptr && section_ua_ss->has_data())
	|| (section_e_bs !=  nullptr && section_e_bs->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_es_rs !=  nullptr && section_es_rs->has_operation())
	|| (section_bb_es !=  nullptr && section_bb_es->has_operation())
	|| (section_bbe_rs !=  nullptr && section_bbe_rs->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_ses_rs !=  nullptr && section_ses_rs->has_operation())
	|| (section_ua_ss !=  nullptr && section_ua_ss->has_operation())
	|| (section_e_bs !=  nullptr && section_e_bs->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-es-rs")
    {
        if(section_es_rs == nullptr)
        {
            section_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs>();
        }
        return section_es_rs;
    }

    if(child_yang_name == "section-bb-es")
    {
        if(section_bb_es == nullptr)
        {
            section_bb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs>();
        }
        return section_bb_es;
    }

    if(child_yang_name == "section-bbe-rs")
    {
        if(section_bbe_rs == nullptr)
        {
            section_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs>();
        }
        return section_bbe_rs;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-ses-rs")
    {
        if(section_ses_rs == nullptr)
        {
            section_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs>();
        }
        return section_ses_rs;
    }

    if(child_yang_name == "section-ua-ss")
    {
        if(section_ua_ss == nullptr)
        {
            section_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs>();
        }
        return section_ua_ss;
    }

    if(child_yang_name == "section-e-bs")
    {
        if(section_e_bs == nullptr)
        {
            section_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs>();
        }
        return section_e_bs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(section_e_ss != nullptr)
    {
        children["section-e-ss"] = section_e_ss;
    }

    if(section_es_rs != nullptr)
    {
        children["section-es-rs"] = section_es_rs;
    }

    if(section_bb_es != nullptr)
    {
        children["section-bb-es"] = section_bb_es;
    }

    if(section_bbe_rs != nullptr)
    {
        children["section-bbe-rs"] = section_bbe_rs;
    }

    if(section_se_ss != nullptr)
    {
        children["section-se-ss"] = section_se_ss;
    }

    if(section_ses_rs != nullptr)
    {
        children["section-ses-rs"] = section_ses_rs;
    }

    if(section_ua_ss != nullptr)
    {
        children["section-ua-ss"] = section_ua_ss;
    }

    if(section_e_bs != nullptr)
    {
        children["section-e-bs"] = section_e_bs;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-e-ss" || name == "section-es-rs" || name == "section-bb-es" || name == "section-bbe-rs" || name == "section-se-ss" || name == "section-ses-rs" || name == "section-ua-ss" || name == "section-e-bs" || name == "section-status")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::SectionEsRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-es-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::~SectionEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::SectionBbEs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-bb-es"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::~SectionBbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::SectionBbeRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-bbe-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::~SectionBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::SectionSesRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-ses-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::~SectionSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::SectionUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-ua-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::~SectionUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::SectionEBs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-bs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::~SectionEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs>())
	,line_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs>())
	,line_bb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs>())
	,line_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs>())
	,line_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs>())
	,line_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs>())
{
    line_e_ss->parent = this;
    line_es_rs->parent = this;
    line_bb_es->parent = this;
    line_bbe_rs->parent = this;
    line_se_ss->parent = this;
    line_ses_rs->parent = this;
    line_ua_ss->parent = this;
    line_e_bs->parent = this;

    yang_name = "line"; yang_parent_name = "stm-hour24stm"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::~Line()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::has_data() const
{
    return line_status.is_set
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_es_rs !=  nullptr && line_es_rs->has_data())
	|| (line_bb_es !=  nullptr && line_bb_es->has_data())
	|| (line_bbe_rs !=  nullptr && line_bbe_rs->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ses_rs !=  nullptr && line_ses_rs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data())
	|| (line_e_bs !=  nullptr && line_e_bs->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_es_rs !=  nullptr && line_es_rs->has_operation())
	|| (line_bb_es !=  nullptr && line_bb_es->has_operation())
	|| (line_bbe_rs !=  nullptr && line_bbe_rs->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ses_rs !=  nullptr && line_ses_rs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation())
	|| (line_e_bs !=  nullptr && line_e_bs->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-es-rs")
    {
        if(line_es_rs == nullptr)
        {
            line_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs>();
        }
        return line_es_rs;
    }

    if(child_yang_name == "line-bb-es")
    {
        if(line_bb_es == nullptr)
        {
            line_bb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs>();
        }
        return line_bb_es;
    }

    if(child_yang_name == "line-bbe-rs")
    {
        if(line_bbe_rs == nullptr)
        {
            line_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs>();
        }
        return line_bbe_rs;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ses-rs")
    {
        if(line_ses_rs == nullptr)
        {
            line_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs>();
        }
        return line_ses_rs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    if(child_yang_name == "line-e-bs")
    {
        if(line_e_bs == nullptr)
        {
            line_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs>();
        }
        return line_e_bs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_es_rs != nullptr)
    {
        children["line-es-rs"] = line_es_rs;
    }

    if(line_bb_es != nullptr)
    {
        children["line-bb-es"] = line_bb_es;
    }

    if(line_bbe_rs != nullptr)
    {
        children["line-bbe-rs"] = line_bbe_rs;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_ses_rs != nullptr)
    {
        children["line-ses-rs"] = line_ses_rs;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    if(line_e_bs != nullptr)
    {
        children["line-e-bs"] = line_e_bs;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-e-ss" || name == "line-es-rs" || name == "line-bb-es" || name == "line-bbe-rs" || name == "line-se-ss" || name == "line-ses-rs" || name == "line-ua-ss" || name == "line-e-bs" || name == "line-status")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::LineEsRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-es-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::~LineEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::LineBbEs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-bb-es"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::~LineBbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::LineBbeRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-bbe-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::~LineBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::LineSesRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ses-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::~LineSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::LineEBs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-bs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::~LineEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FeLine()
    :
    far_end_line_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs>())
	,far_end_line_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs>())
	,far_end_line_ebb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs>())
	,far_end_line_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs>())
	,far_end_line_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs>())
	,far_end_line_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs>())
{
    far_end_line_e_ss->parent = this;
    far_end_line_es_rs->parent = this;
    far_end_line_ebb_es->parent = this;
    far_end_line_bbe_rs->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ses_rs->parent = this;
    far_end_line_ua_ss->parent = this;
    far_end_line_e_bs->parent = this;

    yang_name = "fe-line"; yang_parent_name = "stm-hour24stm"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::~FeLine()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::has_data() const
{
    return (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_es_rs !=  nullptr && far_end_line_es_rs->has_data())
	|| (far_end_line_ebb_es !=  nullptr && far_end_line_ebb_es->has_data())
	|| (far_end_line_bbe_rs !=  nullptr && far_end_line_bbe_rs->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ses_rs !=  nullptr && far_end_line_ses_rs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data())
	|| (far_end_line_e_bs !=  nullptr && far_end_line_e_bs->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_es_rs !=  nullptr && far_end_line_es_rs->has_operation())
	|| (far_end_line_ebb_es !=  nullptr && far_end_line_ebb_es->has_operation())
	|| (far_end_line_bbe_rs !=  nullptr && far_end_line_bbe_rs->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ses_rs !=  nullptr && far_end_line_ses_rs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation())
	|| (far_end_line_e_bs !=  nullptr && far_end_line_e_bs->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-es-rs")
    {
        if(far_end_line_es_rs == nullptr)
        {
            far_end_line_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs>();
        }
        return far_end_line_es_rs;
    }

    if(child_yang_name == "far-end-line-ebb-es")
    {
        if(far_end_line_ebb_es == nullptr)
        {
            far_end_line_ebb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs>();
        }
        return far_end_line_ebb_es;
    }

    if(child_yang_name == "far-end-line-bbe-rs")
    {
        if(far_end_line_bbe_rs == nullptr)
        {
            far_end_line_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs>();
        }
        return far_end_line_bbe_rs;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ses-rs")
    {
        if(far_end_line_ses_rs == nullptr)
        {
            far_end_line_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs>();
        }
        return far_end_line_ses_rs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    if(child_yang_name == "far-end-line-e-bs")
    {
        if(far_end_line_e_bs == nullptr)
        {
            far_end_line_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs>();
        }
        return far_end_line_e_bs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_es_rs != nullptr)
    {
        children["far-end-line-es-rs"] = far_end_line_es_rs;
    }

    if(far_end_line_ebb_es != nullptr)
    {
        children["far-end-line-ebb-es"] = far_end_line_ebb_es;
    }

    if(far_end_line_bbe_rs != nullptr)
    {
        children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_ses_rs != nullptr)
    {
        children["far-end-line-ses-rs"] = far_end_line_ses_rs;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    if(far_end_line_e_bs != nullptr)
    {
        children["far-end-line-e-bs"] = far_end_line_e_bs;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-e-ss" || name == "far-end-line-es-rs" || name == "far-end-line-ebb-es" || name == "far-end-line-bbe-rs" || name == "far-end-line-se-ss" || name == "far-end-line-ses-rs" || name == "far-end-line-ua-ss" || name == "far-end-line-e-bs")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::FarEndLineEsRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-es-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::~FarEndLineEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::FarEndLineEbbEs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ebb-es"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::~FarEndLineEbbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ebb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::FarEndLineBbeRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-bbe-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::~FarEndLineBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::FarEndLineSesRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ses-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::~FarEndLineSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::FarEndLineEBs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-bs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::~FarEndLineEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15()
    :
    stm_minute15stms(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms>())
{
    stm_minute15stms->parent = this;

    yang_name = "stm-minute15"; yang_parent_name = "stm-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::~StmMinute15()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::has_data() const
{
    return (stm_minute15stms !=  nullptr && stm_minute15stms->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (stm_minute15stms !=  nullptr && stm_minute15stms->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15stms")
    {
        if(stm_minute15stms == nullptr)
        {
            stm_minute15stms = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms>();
        }
        return stm_minute15stms;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_minute15stms != nullptr)
    {
        children["stm-minute15stms"] = stm_minute15stms;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-minute15stms")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stms()
{

    yang_name = "stm-minute15stms"; yang_parent_name = "stm-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::~StmMinute15Stms()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::has_data() const
{
    for (std::size_t index=0; index<stm_minute15stm.size(); index++)
    {
        if(stm_minute15stm[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::has_operation() const
{
    for (std::size_t index=0; index<stm_minute15stm.size(); index++)
    {
        if(stm_minute15stm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15stms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15stm")
    {
        for(auto const & c : stm_minute15stm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm>();
        c->parent = this;
        stm_minute15stm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_minute15stm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-minute15stm")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::StmMinute15Stm()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
    	,
    section(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section>())
	,line(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line>())
	,fe_line(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine>())
{
    section->parent = this;
    line->parent = this;
    fe_line->parent = this;

    yang_name = "stm-minute15stm"; yang_parent_name = "stm-minute15stms"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::~StmMinute15Stm()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (section !=  nullptr && section->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (fe_line !=  nullptr && fe_line->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (section !=  nullptr && section->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (fe_line !=  nullptr && fe_line->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15stm" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section>();
        }
        return section;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line>();
        }
        return line;
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine>();
        }
        return fe_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(section != nullptr)
    {
        children["section"] = section;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section" || name == "line" || name == "fe-line" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs>())
	,section_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs>())
	,section_bb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs>())
	,section_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs>())
	,section_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs>())
	,section_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs>())
	,section_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs>())
{
    section_e_ss->parent = this;
    section_es_rs->parent = this;
    section_bb_es->parent = this;
    section_bbe_rs->parent = this;
    section_se_ss->parent = this;
    section_ses_rs->parent = this;
    section_ua_ss->parent = this;
    section_e_bs->parent = this;

    yang_name = "section"; yang_parent_name = "stm-minute15stm"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::~Section()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::has_data() const
{
    return section_status.is_set
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_es_rs !=  nullptr && section_es_rs->has_data())
	|| (section_bb_es !=  nullptr && section_bb_es->has_data())
	|| (section_bbe_rs !=  nullptr && section_bbe_rs->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_ses_rs !=  nullptr && section_ses_rs->has_data())
	|| (section_ua_ss !=  nullptr && section_ua_ss->has_data())
	|| (section_e_bs !=  nullptr && section_e_bs->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_es_rs !=  nullptr && section_es_rs->has_operation())
	|| (section_bb_es !=  nullptr && section_bb_es->has_operation())
	|| (section_bbe_rs !=  nullptr && section_bbe_rs->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_ses_rs !=  nullptr && section_ses_rs->has_operation())
	|| (section_ua_ss !=  nullptr && section_ua_ss->has_operation())
	|| (section_e_bs !=  nullptr && section_e_bs->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-es-rs")
    {
        if(section_es_rs == nullptr)
        {
            section_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs>();
        }
        return section_es_rs;
    }

    if(child_yang_name == "section-bb-es")
    {
        if(section_bb_es == nullptr)
        {
            section_bb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs>();
        }
        return section_bb_es;
    }

    if(child_yang_name == "section-bbe-rs")
    {
        if(section_bbe_rs == nullptr)
        {
            section_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs>();
        }
        return section_bbe_rs;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-ses-rs")
    {
        if(section_ses_rs == nullptr)
        {
            section_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs>();
        }
        return section_ses_rs;
    }

    if(child_yang_name == "section-ua-ss")
    {
        if(section_ua_ss == nullptr)
        {
            section_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs>();
        }
        return section_ua_ss;
    }

    if(child_yang_name == "section-e-bs")
    {
        if(section_e_bs == nullptr)
        {
            section_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs>();
        }
        return section_e_bs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(section_e_ss != nullptr)
    {
        children["section-e-ss"] = section_e_ss;
    }

    if(section_es_rs != nullptr)
    {
        children["section-es-rs"] = section_es_rs;
    }

    if(section_bb_es != nullptr)
    {
        children["section-bb-es"] = section_bb_es;
    }

    if(section_bbe_rs != nullptr)
    {
        children["section-bbe-rs"] = section_bbe_rs;
    }

    if(section_se_ss != nullptr)
    {
        children["section-se-ss"] = section_se_ss;
    }

    if(section_ses_rs != nullptr)
    {
        children["section-ses-rs"] = section_ses_rs;
    }

    if(section_ua_ss != nullptr)
    {
        children["section-ua-ss"] = section_ua_ss;
    }

    if(section_e_bs != nullptr)
    {
        children["section-e-bs"] = section_e_bs;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-e-ss" || name == "section-es-rs" || name == "section-bb-es" || name == "section-bbe-rs" || name == "section-se-ss" || name == "section-ses-rs" || name == "section-ua-ss" || name == "section-e-bs" || name == "section-status")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::SectionEsRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-es-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::~SectionEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::SectionBbEs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-bb-es"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::~SectionBbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::SectionBbeRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-bbe-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::~SectionBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::SectionSesRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-ses-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::~SectionSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::SectionUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-ua-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::~SectionUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::SectionEBs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-bs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::~SectionEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs>())
	,line_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs>())
	,line_bb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs>())
	,line_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs>())
	,line_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs>())
	,line_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs>())
{
    line_e_ss->parent = this;
    line_es_rs->parent = this;
    line_bb_es->parent = this;
    line_bbe_rs->parent = this;
    line_se_ss->parent = this;
    line_ses_rs->parent = this;
    line_ua_ss->parent = this;
    line_e_bs->parent = this;

    yang_name = "line"; yang_parent_name = "stm-minute15stm"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::~Line()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::has_data() const
{
    return line_status.is_set
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_es_rs !=  nullptr && line_es_rs->has_data())
	|| (line_bb_es !=  nullptr && line_bb_es->has_data())
	|| (line_bbe_rs !=  nullptr && line_bbe_rs->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ses_rs !=  nullptr && line_ses_rs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data())
	|| (line_e_bs !=  nullptr && line_e_bs->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_es_rs !=  nullptr && line_es_rs->has_operation())
	|| (line_bb_es !=  nullptr && line_bb_es->has_operation())
	|| (line_bbe_rs !=  nullptr && line_bbe_rs->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ses_rs !=  nullptr && line_ses_rs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation())
	|| (line_e_bs !=  nullptr && line_e_bs->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-es-rs")
    {
        if(line_es_rs == nullptr)
        {
            line_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs>();
        }
        return line_es_rs;
    }

    if(child_yang_name == "line-bb-es")
    {
        if(line_bb_es == nullptr)
        {
            line_bb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs>();
        }
        return line_bb_es;
    }

    if(child_yang_name == "line-bbe-rs")
    {
        if(line_bbe_rs == nullptr)
        {
            line_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs>();
        }
        return line_bbe_rs;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ses-rs")
    {
        if(line_ses_rs == nullptr)
        {
            line_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs>();
        }
        return line_ses_rs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    if(child_yang_name == "line-e-bs")
    {
        if(line_e_bs == nullptr)
        {
            line_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs>();
        }
        return line_e_bs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_es_rs != nullptr)
    {
        children["line-es-rs"] = line_es_rs;
    }

    if(line_bb_es != nullptr)
    {
        children["line-bb-es"] = line_bb_es;
    }

    if(line_bbe_rs != nullptr)
    {
        children["line-bbe-rs"] = line_bbe_rs;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_ses_rs != nullptr)
    {
        children["line-ses-rs"] = line_ses_rs;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    if(line_e_bs != nullptr)
    {
        children["line-e-bs"] = line_e_bs;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-e-ss" || name == "line-es-rs" || name == "line-bb-es" || name == "line-bbe-rs" || name == "line-se-ss" || name == "line-ses-rs" || name == "line-ua-ss" || name == "line-e-bs" || name == "line-status")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::LineEsRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-es-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::~LineEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::LineBbEs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-bb-es"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::~LineBbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::LineBbeRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-bbe-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::~LineBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::LineSesRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ses-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::~LineSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::LineEBs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-bs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::~LineEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FeLine()
    :
    far_end_line_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs>())
	,far_end_line_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs>())
	,far_end_line_ebb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs>())
	,far_end_line_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs>())
	,far_end_line_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs>())
	,far_end_line_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs>())
{
    far_end_line_e_ss->parent = this;
    far_end_line_es_rs->parent = this;
    far_end_line_ebb_es->parent = this;
    far_end_line_bbe_rs->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ses_rs->parent = this;
    far_end_line_ua_ss->parent = this;
    far_end_line_e_bs->parent = this;

    yang_name = "fe-line"; yang_parent_name = "stm-minute15stm"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::~FeLine()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::has_data() const
{
    return (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_es_rs !=  nullptr && far_end_line_es_rs->has_data())
	|| (far_end_line_ebb_es !=  nullptr && far_end_line_ebb_es->has_data())
	|| (far_end_line_bbe_rs !=  nullptr && far_end_line_bbe_rs->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ses_rs !=  nullptr && far_end_line_ses_rs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data())
	|| (far_end_line_e_bs !=  nullptr && far_end_line_e_bs->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_es_rs !=  nullptr && far_end_line_es_rs->has_operation())
	|| (far_end_line_ebb_es !=  nullptr && far_end_line_ebb_es->has_operation())
	|| (far_end_line_bbe_rs !=  nullptr && far_end_line_bbe_rs->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ses_rs !=  nullptr && far_end_line_ses_rs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation())
	|| (far_end_line_e_bs !=  nullptr && far_end_line_e_bs->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-es-rs")
    {
        if(far_end_line_es_rs == nullptr)
        {
            far_end_line_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs>();
        }
        return far_end_line_es_rs;
    }

    if(child_yang_name == "far-end-line-ebb-es")
    {
        if(far_end_line_ebb_es == nullptr)
        {
            far_end_line_ebb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs>();
        }
        return far_end_line_ebb_es;
    }

    if(child_yang_name == "far-end-line-bbe-rs")
    {
        if(far_end_line_bbe_rs == nullptr)
        {
            far_end_line_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs>();
        }
        return far_end_line_bbe_rs;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ses-rs")
    {
        if(far_end_line_ses_rs == nullptr)
        {
            far_end_line_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs>();
        }
        return far_end_line_ses_rs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    if(child_yang_name == "far-end-line-e-bs")
    {
        if(far_end_line_e_bs == nullptr)
        {
            far_end_line_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs>();
        }
        return far_end_line_e_bs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_es_rs != nullptr)
    {
        children["far-end-line-es-rs"] = far_end_line_es_rs;
    }

    if(far_end_line_ebb_es != nullptr)
    {
        children["far-end-line-ebb-es"] = far_end_line_ebb_es;
    }

    if(far_end_line_bbe_rs != nullptr)
    {
        children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_ses_rs != nullptr)
    {
        children["far-end-line-ses-rs"] = far_end_line_ses_rs;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    if(far_end_line_e_bs != nullptr)
    {
        children["far-end-line-e-bs"] = far_end_line_e_bs;
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-e-ss" || name == "far-end-line-es-rs" || name == "far-end-line-ebb-es" || name == "far-end-line-bbe-rs" || name == "far-end-line-se-ss" || name == "far-end-line-ses-rs" || name == "far-end-line-ua-ss" || name == "far-end-line-e-bs")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::FarEndLineEsRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-es-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::~FarEndLineEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::FarEndLineEbbEs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ebb-es"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::~FarEndLineEbbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ebb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::FarEndLineBbeRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-bbe-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::~FarEndLineBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::FarEndLineSesRs()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ses-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::~FarEndLineSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::FarEndLineEBs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-bs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::~FarEndLineEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::Sonet()
    :
    sonet_ports(std::make_shared<PerformanceManagement::Sonet::SonetPorts>())
{
    sonet_ports->parent = this;

    yang_name = "sonet"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Sonet::~Sonet()
{
}

bool PerformanceManagement::Sonet::has_data() const
{
    return (sonet_ports !=  nullptr && sonet_ports->has_data());
}

bool PerformanceManagement::Sonet::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_ports !=  nullptr && sonet_ports->has_operation());
}

std::string PerformanceManagement::Sonet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Sonet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-ports")
    {
        if(sonet_ports == nullptr)
        {
            sonet_ports = std::make_shared<PerformanceManagement::Sonet::SonetPorts>();
        }
        return sonet_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_ports != nullptr)
    {
        children["sonet-ports"] = sonet_ports;
    }

    return children;
}

void PerformanceManagement::Sonet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-ports")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPorts()
{

    yang_name = "sonet-ports"; yang_parent_name = "sonet"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Sonet::SonetPorts::~SonetPorts()
{
}

bool PerformanceManagement::Sonet::SonetPorts::has_data() const
{
    for (std::size_t index=0; index<sonet_port.size(); index++)
    {
        if(sonet_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sonet::SonetPorts::has_operation() const
{
    for (std::size_t index=0; index<sonet_port.size(); index++)
    {
        if(sonet_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/sonet/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Sonet::SonetPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-port")
    {
        for(auto const & c : sonet_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort>();
        c->parent = this;
        sonet_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-port")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetPort()
    :
    name{YType::str, "name"}
    	,
    sonet_current(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent>())
{
    sonet_current->parent = this;

    yang_name = "sonet-port"; yang_parent_name = "sonet-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::~SonetPort()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::has_data() const
{
    return name.is_set
	|| (sonet_current !=  nullptr && sonet_current->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (sonet_current !=  nullptr && sonet_current->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/sonet/sonet-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-current")
    {
        if(sonet_current == nullptr)
        {
            sonet_current = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent>();
        }
        return sonet_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_current != nullptr)
    {
        children["sonet-current"] = sonet_current;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-current" || name == "name")
        return true;
    return false;
}


}
}

