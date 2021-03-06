% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/findActions.R
\name{optimalSearch}
\alias{optimalSearch}
\title{Find the optimal actions of the HMDP given price scenarios}
\usage{
optimalSearch(param, scenarioNum, startTime, endTime, finisher, feed, piglet,
  dlmPig, dlmFeed, dlmPiglet, policy, mdp, wLbl, durLbl, g, usePig, useFeed,
  usePiglet)
}
\arguments{
\item{param}{Prameter values of the HMDP.}

\item{scenarioNum}{Scenario number related to the price data in a time period}

\item{startTime}{Start time of the time period contained price data of the related scenario}

\item{endTime}{End time of the time period contained price data of the related scenario}

\item{finisher}{Time series of pork price date}

\item{feed}{Time series of feed price date}

\item{piglet}{Time series of piglet price date}

\item{dlmPig}{Time series of piglet price date}

\item{dlmFeed}{Time series of piglet price date}

\item{dlmPiglet}{Time series of piglet price date}

\item{policy}{optimal policy of the HMDP}

\item{mdp}{The HMDP loaded using \code{loadMDP}}

\item{wLbl}{parameters related to bulding step of HMDP}

\item{durLbl}{parameters related to bulding step of HMDP}

\item{g}{averga reward pet time unit of the optimal policy}

\item{usePig}{A boolean variable for inversing the trend of pork price in the given time series}

\item{useFeed}{A boolean variable for inversing the trend of feed price in the given time series}

\item{usePiglet}{A boolean variable for inversing the trend of piglet price in the given time series}
}
\value{
A data table containing the optimal action and other information for polting the scenarios with optimal actions
}
\description{
Find the optimal actions of the HMDP given price scenarios
}
\author{
Reza Pourmoayed \email{rpourmoayed@econ.au.dk} and Lars Relund \email{lars@relund.dk}
}

